#include <iostream>
#include <fstream>
#include<vector>

int main() {

    
    //names of files with 0s and 1s
    std::ifstream oneFiles("C:/Datasets/Test_Set/Test_Set/one.csv");

    std::ifstream zeroFiles("C:/Datasets/Test_Set/Test_Set/zero.csv");


    //source where pics are present
    std::string sourceFolder = "C:/Datasets/Test_Set/Test_Set/Test/";

    //destination for 0s
    std::string zeroDestination = "C:/Datasets/Test_Set/Test_Set/0/";

    //destination for 1s
    std::string oneDestination = "C:/Datasets/Test_Set/Test_Set/1/";


    // std::string sourcePath = "U:/C++/moving_files/old_folder/testfile.txt";
    // std::string destinationPath = "U:/C++/moving_files/new_folder/testfile.txt";


    /*
        reading the oneFiles to obtain the names of the files with disease risk 1 into a vector
    */


    std::vector<std::string> oneFileNames;
    
    while(!oneFiles.eof()){
        
        std::string elem;
        oneFiles >> elem;
        oneFileNames.push_back(elem);
        std::cout<<elem;
        if(elem != "ID")
        {
            std::ifstream sourceFile(sourceFolder+elem+".png",std::ios::binary);
            std::ofstream destinationFile(oneDestination+elem+".png",std::ios::binary);
            destinationFile << sourceFile.rdbuf();

            sourceFile.close();
            destinationFile.close();
        }
    }
    std::cout<<"Done";
    zeroFiles.close();
    oneFiles.close();

    // // Copy the file
    // std::ifstream sourceFile(sourcePath, std::ios::binary);
    // std::ofstream destinationFile(destinationPath, std::ios::binary);

    // if (!sourceFile.is_open()) {
    //     std::cerr << "Error opening source file." << std::endl;
    //     return 1;
    // }

    // if (!destinationFile.is_open()) {
    //     std::cerr << "Error opening destination file." << std::endl;
    //     return 1;
    // }

    // destinationFile << sourceFile.rdbuf();

    // // Close file streams
    // sourceFile.close();
    // destinationFile.close();

    // // Check if the copy was successful
    // if (!sourceFile.eof()) {
    //     std::cerr << "Error reading from source file." << std::endl;
    //     return 1;
    // }

    // // Delete the original file
    // if (std::remove(sourcePath.c_str()) != 0) {
    //     std::cerr << "Error deleting source file." << std::endl;
    //     return 1;
    // }

    // std::cout << "File moved successfully." << std::endl;

    return 0;
}
