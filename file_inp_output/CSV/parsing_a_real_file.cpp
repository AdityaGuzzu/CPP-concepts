/*
    I am going to parse the global data file 
    downloaded for data analysis in the python folder
*/
#include<fstream>
#include<algorithm>
int main()
{
    std::ifstream InFile("E:/python/Data/Countries_data.csv");
    std::ofstream OutFile("E:/python/Data/parsed_country_data.csv");
    while(InFile.good())
    {
       std::string word;
       std::getline(InFile,word);
       OutFile<<std::endl;

       //We see that the data inside the double quotes has a comma which should be replaced by a dot
       for(int main_iter=0;main_iter<word.length();main_iter++)
       {
            int sub_str_iter = main_iter;
            if(word[main_iter] == '\"')
            {
                sub_str_iter++;
                while(word[sub_str_iter] != '\"')
                {
                    if(word[sub_str_iter] == ',')
                    {
                        word[sub_str_iter] = '.';
                    }
                    sub_str_iter++;
                }
                main_iter=sub_str_iter+1;
            }
       }
       word.erase(std::remove(word.begin(), word.end(), '\"'), word.end());
       OutFile<<word;
    }
    InFile.close();
    OutFile.close();
}