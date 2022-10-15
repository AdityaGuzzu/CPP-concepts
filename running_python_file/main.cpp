#include<iostream>
#include<fstream>
int main()
{
    std::cout<<"Now, printing Hello World from Python: ";
    
    std::ifstream InFile("rand.csv");
    while(InFile.good())
    {
        std::string line;
        getline(InFile,line);
        std::cout<<line<<std::endl;
    }
    InFile.close();
    system("python update_CSV.py");
    InFile.open("rand.csv");
    std::cout<<std::endl;
    while(InFile.good())
    {
        std::string line;
        getline(InFile,line);
        std::cout<<line<<std::endl;
    }

    
}
    
