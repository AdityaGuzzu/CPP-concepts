#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>


class graph
{
    //adjacency list
    std::unordered_map<int, std::list<int>> adj;
    std::vector<bool> Visited;
    int size;

    public:
    graph(int size){
        
        for(int iter=0; iter<size; iter++)
        {
            Visited.push_back(false);
        }
        
    }

    void AddNode(int key)
    {
        size++;
        this->Visited.push_back(false);
    }

    void AddEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void ShowAdjList()
    {
        for(auto x: adj)
        {
            std::cout<<x.first<<" -> ";
            for(auto l: x.second)
            {
                std::cout<<l<<" ";
            }
            std::cout<<std::endl;
        }
    }

    void dfs(int node)
    {
       if(this->Visited[node])
       return;
       else
       {
            std::cout<<node<<"->";
            Visited[node] = true;
            for(int x: adj[node])
            {
                dfs(x);
            }
       }

    }


};

int main()
{
    graph MyGraph(6);
    MyGraph.AddEdge(0,1);
    MyGraph.AddEdge(0,4);
    MyGraph.AddEdge(0,5);
    MyGraph.AddEdge(1,2);
    MyGraph.AddEdge(1,3);
    MyGraph.AddEdge(2,3);
    MyGraph.AddEdge(3,4);
    MyGraph.AddEdge(4,5);
    MyGraph.ShowAdjList();
    MyGraph.dfs(5);

}