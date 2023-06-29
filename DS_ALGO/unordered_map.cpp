#include<unordered_map>
#include<iostream>
//an unordered map is like a dict in Python
//It has key-value pairs

int main()
{
    using namespace std;
    unordered_map<string, int> kv = {
        {"Rashford", 30},
        {"Haaland", 55},
        {"Salah", 20}
    };
    cout<<kv["Rashford"]<<endl; 
    
    //iterating
    for(auto x:kv)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
}