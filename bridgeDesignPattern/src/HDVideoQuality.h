#ifndef HDVIDEO_QUALITY_H
#define HDVIDEO_QUALITY_H
#include <iostream>
#include "VideoQualityMode.h"
// concrete implementor
class HDVideoQuality: public VideoQualityMode{
public:
    virtual void applyQuality()
    {
        std::cout<<"Appling HD Quality"<<std::endl;
    }
    
};

#endif // HDVIDEO_QUALITY_MODE_H