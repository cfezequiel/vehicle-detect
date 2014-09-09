#include <string>
#include <iostream>
#include <stdio.h>

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

/** Global variables */
String cascadeName = "../sample_data/classifier/cascade.xml";
CascadeClassifier cascade;
String windowName = "Capture - Vehicle detection";

/** @function detectAndDisplay */
void detectAndDisplay(Mat image)
{
    vector<Rect> vehicles;
    Mat frame_gray;

    cvtColor(image, frame_gray, COLOR_BGR2GRAY);
    equalizeHist(frame_gray, frame_gray);

    //-- Detect vehicles 
    cascade.detectMultiScale(frame_gray, vehicles);

    const int nVehicles = vehicles.size();
    for (size_t i = 0; i < nVehicles; i++)
    {
      Point center(vehicles[i].x + vehicles[i].width*0.5, 
        vehicles[i].y + vehicles[i].height*0.5 );
      ellipse(image, center, Size(vehicles[i].width*0.5, vehicles[i].height*0.5), 
        0, 0, 360, Scalar(255, 0,255), 4, 8, 0 );
    }

    //-- Show what you got
    imshow(windowName, image);

    //-- Save annotated image 
    imwrite("output.jpg", image);
}

/** @function main */
int main(int argc, char **argv)
{
  if (argc < 2)
  {
    cout << "Usage: ./detect <image>" << endl;
    return -1;
  }

  // Load the cascade
  if (!cascade.load(cascadeName))
  {
    cerr << "--(!)Error loading the cascade\n" << endl; 
    return -1; 
  };

  // Load the image
  Mat image = imread(argv[1]);

  //Apply the classifier to the image
  detectAndDisplay(image);

  waitKey(0);

  return 0;
}

