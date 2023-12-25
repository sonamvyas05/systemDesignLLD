#ifndef YOUTUBEVIDEOPROCESSING_H
#define YOUTUBEVIDEOPROCESSING_H
#include<iostream>
#include "VideoProcessing.h"
// concrete Abstraction
class YouTubeVideoProcessing: public VideoProcessing{
    public:
      void processVideo()
      {
        std::cout<<"video is processed by YouTube.."<<std::endl;
      }
};
#endif