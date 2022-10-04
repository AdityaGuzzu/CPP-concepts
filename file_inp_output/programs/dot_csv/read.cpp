#include<fstream>
#include<string>
int main()
{
    std::fstream InFile("data.csv",std::ios::in);
    std::fstream OutFile("output.csv",std::ios::app);
    while(InFile.good())
    {
        std::string word;
        std::getline(InFile,word);
        OutFile<<std::endl;
        int i=0;
        for(i=0; i<word.length(); i++)
        {
            if(word[i] == '\"')
            {
                word[i] = ' ';
            }
        }
        OutFile<<word;
    }
    InFile.close();
    OutFile.close();

}