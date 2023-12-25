#ifndef FOURKVIDEO_QUALITY_H
#define FOURKVIDEO_QUALITY_H
#include <iostream>
#include "VideoQualityMode.h"
// concrete implementor
class FourKVideoQuality: public VideoQualityMode{
public:
    virtual void applyQuality()
    {
        std::cout<<"Appling 4k Quality"<<std::endl;
    }
    
};

#endif // 4kVIDEO_QUALITY_MODE_H