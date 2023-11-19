#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
#include "merienne_twister_method.cpp"

// class category
// {
//     public:
//     std::string name;
//     std::vector<int> all_prices;
// }

#include <random>

int random_num(int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, max);
    return distr(gen);
}



int main()
{
    std::vector<std::string> category_names = {"Books", "Pens", "Pencils", "Exam Pads", "Glue", "Sharpeners", "Erasers", "Gifting","Misc"};
    // std::vector<category*> category_objects;
    // for(int i=0; i<9; i++)
    // {
    //     category_objects.push_back(new category);
    //     category_objects.back()->name=category_names[i];
    // }
    // //Books
    // std::vector<int> prices = [20,30,50];

    // std::vector<int> Book_sales;
    std::vector<int> sale;
    for(int i=0;i<180;i++)
    {
        sale.push_back(random_num(1000));
    }
    for(auto num:sale)
    std::cout<<std::endl<<num;


}

