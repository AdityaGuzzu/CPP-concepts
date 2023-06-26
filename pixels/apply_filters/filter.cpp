#include<fstream>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{

    cout<<"What colour filter do you want? Enter the RGB triad";
    int add_r = 0, add_g = 0, add_b = 0;
    cin >> add_r;
    cin >> add_g;
    cin >> add_b;

    //open the ppm image in read mode and another file in write mode
    ifstream img;
    ofstream new_img;
    img.open("bird.ppm");
    new_img.open("new_bird.ppm");

    //ppm file stores the pixel triads as text 
    string type = " ", width = " ", height = " ", lim = " ";
    img>>type;
    img>>width;
    img>>height;
    img>>lim;

    //dropping the same specs into new file
    new_img << type << endl;
    new_img << width << " ";
    new_img << height << endl;
    new_img << lim << endl;


    while(!img.eof()){
        string red = " ", green = " ", blue = " ";
        int r = 0, g = 0, b = 0;
        img >> red;
        img >> green;
        img >> blue;


        //converting the rgb triad string to integers
        stringstream redstr(red);
        redstr >> r;

        stringstream greenstr(green);
        greenstr >> g;

        stringstream bluestr(blue);
        bluestr >> b;

        r = 255;

        if( g + 115 >= 255) g = 255; 
        else g += 115;

        new_img << r << " " << g << " " << b << endl;
    
    
    }

    
    img.close();
    new_img.close();

    



}