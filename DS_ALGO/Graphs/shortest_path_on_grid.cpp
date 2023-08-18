#include<iostream>
#include<vector>
#include<list>

class maze
{
    public:
    int rmax;
    int cmax;
    int sr,sc,er,ec;
    
    std::vector<std::vector<char>> grid;
    std::vector<std::vector<bool>> Visited;

    maze()
    {

    }
    

    maze(int rmax, int cmax)
    {
        
        this->rmax = rmax;
        this->cmax = cmax;
        for(int c=0; c<cmax; c++)
        {
            for(int r=0; r<rmax; r++)
            {
                std::cout<<std::endl<<"Reached!";
                grid[r][c] = '.';
                Visited[r][c] = false;
            }   
        }
        grid.shrink_to_fit();
        Visited.shrink_to_fit();
        
        // std::list<int> rock_rows;
        // std::list<int> rock_cols;

        std::cout<<"Maze of dimensions "<<rmax<<"*"<<cmax<<" initialised"<<std::endl;
    }

    void init_rocks()
    {

        start_point:
        int row, col;
        std::cout<<"Enter the coordinate of the start point's coordinates with a seperating blank space: ";
        std::cin>> row;
        std::cin>> col;
        if(valid_box(row,col))
        {
            //set the start point to 'S'
            grid[row][col] = 'S';
            sr = row;
            sc = col;

            end_point:

            std::cout<<"Enter the end point: "<<std::endl;
            std::cin>>row;
            std::cin>>col;
            if(valid_box(row,col))
            {
                //set the end point to 'E'
                grid[row][col] = 'E';
                er = row;
                ec = col;

                set_rocks:
                //allow the user to set rocks in the grid:
                int no_of_rocks;
                std::cout<<"Enter the number of rocks you want: ";
                std::cin>>no_of_rocks;
                if(no_of_rocks >= (rmax*cmax - 2) )
                {
                    std::cout<<"Too Many rocks! Set again!"<<std::endl;
                    goto set_rocks;
                } 
                else if(no_of_rocks < 0)
                {
                    std::cout<<"Come on! No negatie rocks!!!! Set again"<<std::endl;
                    goto set_rocks;
                }
                else
                {
                    for(int setrock = 0; setrock<no_of_rocks; setrock++)
                    {
                        valid_rocks:

                        int rockr, rockc;
                        std::cout<<"Enter the row and column: "<<std::endl;
                        std::cin>>rockr;
                        std::cin>>rockc;
                        if(valid_box(rockr, rockc,'r'))
                        {
                            std::cout<<"Rock exists, enter another position: "<<std::endl;
                            goto valid_rocks;

                        }
                        else if(!valid_box(rockr,rockc) && grid[rockr][rockc] != 'S' && grid[rockr][rockc] != 'E')
                        {
                            std::cout<<"Oops! Box out of range! Enter again! "<<std::endl;
                            goto valid_rocks;
                        }
                        else
                        {
                            grid[rockr][rockc] = 'R';
                        }
                    }
                }

            }
            else
            {
            std::cout<<"Enter the correct coordinates to start: "<<std::endl;
            goto end_point;
            }

        }
        else
        {
            std::cout<<"Enter the correct coordinates to start: "<<std::endl;
            goto start_point;
        }

    }


    //to check if the passed on coordinates are in the range
    bool valid_box(int rpos, int cpos)
    {
        return(!(rpos<0 || cpos<0  || rpos>=rmax || cpos>=cmax));
    }

    //to check if a rock exists
    bool valid_box(int rpos, int cpos, char c)
    {
        return(grid[rpos][cpos] == 'R');
    }

    std::list<char> rows;
    std::list<char> cols;
    int nodes_in_layer = 1;
    int nodes_left = 0;
    int steps = 0;

    

    void explore_neighbours(int cr,int cc)
    {
        int dr[] = {1,-1,0,0};
        int dc[] = {0,0,1,-1}; 
        Visited[cr][cc] = true;
        for(int i=0; i<4; i++)
        {
            if(valid_box(cr+dr[i],cc+dr[i]) && valid_box(cr+dr[i],cc+dr[i],'R') && !Visited[cr+dr[i]][cc+dc[i]])
            {
                nodes_left++;
                Visited[cr+dr[i]][cc+dr[i]] = true;
            }
        }
    }

    void printmaze()
    {
        std::cout<<std::endl<<std::endl;
        std::cout<<"\t\t\tPRINTING THE MAZE \t\t\t";
        for(int c=0; c<cmax; c++)
        {
            for(int r=0;r<rmax;r++)
            {
                std::cout<<grid[r][c]<<"  ";
            }
            std::cout<<std::endl;
        }
    }

    int shortest_path()
    {
        
        rows.push_back(sr);
        cols.push_back(sc);
        Visited[sr][sc] = true;
        while(!rows.empty())
        {

            //variables to store current row and current col number
            int cr,cc;
            cr = rows.front();
            rows.pop_front();
            cc = cols.front();
            cols.pop_front();
            if(grid[cr][cc] == 'R')
            {
                break;
            }
            
            explore_neighbours(cr,cc);
            nodes_in_layer --;
            if(nodes_in_layer == 0)
            {
                nodes_in_layer = nodes_left;
                nodes_left = 0;
                steps++;
            }

        }
        return steps;

    }
    

};


int main()
{
    std::cout<<"HEllo";
    maze MyMaze(10,5);
    MyMaze.printmaze();
}