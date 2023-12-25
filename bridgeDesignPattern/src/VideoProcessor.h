#ifndef VIDEO_PROCESSOR_H
#define VIDEO_PROCESSOR_H
#include "VideoProcessing.h"
#include "VideoQualityMode.h"
class VideoProcessor{
    public:
    VideoProcessor(VideoProcessing* processing, VideoQualityMode* qualityMode)
        : videoProcessing(processing), videoQualityMode(qualityMode) {}

    virtual void process(){
        videoProcessing->processVideo();
        videoQualityMode->applyQuality();
    }
    private:
     VideoProcessing* videoProcessing;
     VideoQualityMode* videoQualityMode;
    
};
#endif