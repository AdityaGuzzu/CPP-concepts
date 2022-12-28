#include "Merienne_Twister.cpp"
#include<vector>
#include<algorithm>
bool search(std::vector<int> num_vect, int search_elem)
{
    for(auto elem: num_vect)
    {
        if(elem == search_elem)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    std::vector<int> rands;
    int team_size = 19;
    while(rands.size() != team_size)
    {
        int temp = random_num(team_size);
        if(search(rands,temp))
        {
            continue;
        }
        else
        {
            rands.push_back(temp);
            rands.shrink_to_fit();
        }
    }
    for(int i:rands)
    {
        std::cout<<std::endl<<i;
    }
    
}