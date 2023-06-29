#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<algorithm>

//DFS is used to find all the connected components of the graph.
//Do DFS on all the nodes that aren't visited. That will give rise to components
class graph
{
    public:
    //contains adjacency lists.these are undirected unweighted graphs
    std::unordered_map<int, std::list<int>> adj;
    std::vector<bool> Visited;
    std::list<int> queue;
    int size;

    graph(int size){
        this->size = size;
        for(int iter=0; iter<size; iter++)
        {
            Visited.push_back(false);
        }
        
    }

    void addEdge(int u, int v)
    {
        //unordered Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void ShowAdjList()
    {
        
        for(auto x: adj)
        {
            std::cout<<x.first<<"->";
            for(auto j:x.second)
            {
                std::cout<<j<<" ";
            }
            std::cout<<std::endl;
        }
    }

    std::vector<int> bfs(int start, int end)
    {
        std::vector<int> path;
        for(int i=0; i<size; i++) path.push_back(-1);
        queue.push_back(start);
        Visited[start] = true;
        while(!queue.empty())
        {
            int node = queue.front();
            queue.pop_front();
            for(int next: adj[node])
            {
                if(!Visited[next])
                {
                    queue.push_back(next);
                    path[next] = node;
                    Visited[next] = true;
                }
                    
            }
        }
        std::vector<int> dest;
        for(int a = end; a != -1; a = path[a])
        {
            if(a == -1)
            break;
            
            else
            dest.push_back(a);
        }
        std::reverse(dest.begin(), dest.end());
        return dest;


    };
        
};

int main()
{
    graph MyGraph(6);
    MyGraph.addEdge(0,1);
    MyGraph.addEdge(0,4);
    MyGraph.addEdge(0,5);
    MyGraph.addEdge(1,2);
    MyGraph.addEdge(1,3);
    MyGraph.addEdge(2,3);
    MyGraph.addEdge(3,4);
    MyGraph.addEdge(4,5);
    MyGraph.ShowAdjList();
    std::cout<<std::endl;
    std::vector<int> path = MyGraph.bfs(1,5);
    for(int node: path)
    std::cout<<node<<"->";

}