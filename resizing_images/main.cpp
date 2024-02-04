// Include the OpenCV header file
#include "D:/opencv/build/include/opencv2/opencv.hpp"
// Use the cv namespace
using namespace cv;

// Define a function to resize an image
void resizeImage (const Mat& input, Mat& output, int width, int height) {
  // Check if the input image is empty
  if (input.empty ()) {
    std::cout << "Input image is empty.\n";
    return;
  }
  // Resize the input image to the specified width and height
  // using the INTER_AREA interpolation method
  resize (input, output, Size (width, height), 0, 0, INTER_AREA);
}

// Define the main function
int main () {
  // Read an image from a file
  Mat input = imread ("116.png");
  // Create an empty output image
  Mat output;
  // Call the resize function with 224 by 224 pixels
  resizeImage (input, output, 224, 224);
  // Write the output image to a file
  imwrite ("resized_image.jpg", output);
  // Return 0 to indicate success
  return 0;
}
