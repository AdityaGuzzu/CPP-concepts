#include<iostream>
#include<unordered_map>
#include<list>

class graph
{
    public:
    //contains adjacency lists.these are undirected unweighted graphs
    std::unordered_map<int, std::list<int>> adj;

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

};
int main()
{
    graph MyGraph;
    int size;
    std::cout<<"Enter the size of the graph: ";
    std::cin>>size;
    for(int iter = 0; iter<size; iter++)
    {
        int u,v;
        std::cin>>u>>v;
        MyGraph.addEdge(u,v);
    }
    MyGraph.ShowAdjList();
}