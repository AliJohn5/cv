#include "vision.h"


Vision::Vision (int indexOfCameraR,int indexOfCameraL) : indexOfCameraR(indexOfCameraR), indexOfCameraL(indexOfCameraL)
{
    // start capture for R camera
    capR.open(indexOfCameraR);

    // start capture for l camera
    capL.open(indexOfCameraL);


}

Vision::~Vision()
{
}

void Vision::startStreaming(bool _didUWantToShowImage)
{
    didUWantToShowImage = _didUWantToShowImage;

}