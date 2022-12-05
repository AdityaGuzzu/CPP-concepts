#include<iostream>
#include<vector>
class temp
{
    public:
    int num;
};

int main()
{
    std::vector<temp *> temp_ptrs;
    for(int i=0;i<5;i++)
    {
        temp *var = new temp;
        var->num = i;
        temp_ptrs.push_back(var);
    }
    //standard C style looping
    std::cout<<std::endl;
    for(int i=0; i<temp_ptrs.size(); i++)
    {
        std::cout<<temp_ptrs[i]->num<<std::endl;
    }

    std::cout<<std::endl;
    //using iterators
    for(std::vector<temp *>::const_iterator it = temp_ptrs.begin(); it != temp_ptrs.end(); it++)
    {
        std::cout<<(*it)->num<<std::endl;
    }

    std::cout<<std::endl;
    //range based for loop
    for(auto ptr:temp_ptrs)
    {
        std::cout<<ptr->num<<std::endl;
    }
    
}