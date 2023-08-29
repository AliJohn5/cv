#include <thread>

#include "opencv4/opencv2/opencv.hpp"

class Vision
{
private:
    int indexOfCameraR;
    int indexOfCameraL;
    
    // define capture R camera
    cv::VideoCapture capR;

    // define capture L camera
    cv::VideoCapture capL;


    // define Mat for frame R
    cv::Mat frameR;

    // define Mat for frame L
    cv::Mat frameL;

    // this for showing every frame or not;
    bool didUWantToShowImage = false;


public:
    Vision(int indexOfCameraR,int indexOfCameraL);

// this function start Streaming for start  capturing 
    void startStreaming(bool _didUWantToShowImage);

    ~Vision();
};