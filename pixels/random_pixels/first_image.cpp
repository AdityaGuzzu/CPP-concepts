#include<fstream>
#include<cstdlib>
#include<ctime>

const int height=255, width = 255;
int main()
{
    srand(time(0));
    std::ofstream img("image.ppm");
    img << "P3" << std::endl;
    img << width << " " << height << std::endl;
    img << "255" << std::endl;

    for(int y=0; y<height; y++)
    {
        for(int x = 0; x<width; x++)
        {

            img << rand()%255 << " "<< rand()%255 << " "<< rand()%255<<std::endl;
        }
    }
    return 0;
    
}