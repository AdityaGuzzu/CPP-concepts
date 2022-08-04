/* Create a vector of pointers */
#include<iostream>
#include<vector>
using namespace std;
class base
{
    private:
    int x, y;
    public:
    base(int x, int y): x(x), y(y) {cout<<"\nX = "<<x<<"\tY = "<<y;}
    void get_val()
    {
        cout<<endl<<"X = "<<x<<"\tY ="<<y;
    }
};

int main()
{
    //IDK why but I am only getting the output of the first object created.
    std::vector<base *> base_ptrs;
    for(int i=0; i<3; i++)
    {
        base_ptrs.push_back(new base(i,i+1));
    }
    base_ptrs[1]->get_val();
    base_ptrs[2]->get_val();
}