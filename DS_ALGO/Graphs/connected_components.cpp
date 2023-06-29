#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>

//DFS is used to find all the connected components of the graph.
//Do DFS on all the nodes that aren't visited. That will give rise to components
class graph
{
    public:
    //contains adjacency lists.these are undirected unweighted graphs
    std::unordered_map<int, std::list<int>> adj;
    std::vector<bool> Visited;
    int size;

    public:
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

    void connected_comps(){
        std::vector<std::string> comps;
        for(int node=0; node<size; node++)
        {
            if(Visited[node])
            continue;
            else
            {
                std::cout<<std::endl;
                dfs(node);
            }
        } 
    }
};

int main()
{
    graph MyGraph(8);
    // MyGraph.addEdge(0,1);
    // MyGraph.addEdge(0,4);
    // MyGraph.addEdge(0,5);
    MyGraph.addEdge(1,2);
    MyGraph.addEdge(1,3);
    MyGraph.addEdge(2,3);
    MyGraph.addEdge(3,4);
    MyGraph.addEdge(4,5);
    MyGraph.addEdge(6,7);
    MyGraph.addEdge(6,0);
    MyGraph.addEdge(7,0);
    MyGraph.ShowAdjList();
    //MyGraph.dfs(5);
    MyGraph.connected_comps();

}
