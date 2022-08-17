/*  We will use pointers of objects of a class in a vector. We will pass that vector as an 
    argument to the function and then use iterators
*/
#include<iostream>
#include<vector>
//Create a class with a public member function
class A
{
    public:
    void welcome()
    {
        std::cout<<"Welcome"<<std::endl;
    }
};

//create a function which takes a vector of pointers to the A objects as an argument.
void read(std::vector<A *> objects)
{
    //Use an iterator to loop over all the objects
    for(std::vector<A *>::iterator it = objects.begin(); it != objects.end(); it++)
    {
       (*it)->welcome();        //Works. Keep in mind the syntax though
    }
}

int main()
{
    A obj1;
    A obj2;
    A obj3;
    std::vector<A *> objects = {&obj1, &obj2, &obj3};   //Initialising the vector
    read(objects);                                      //Calling the function

}