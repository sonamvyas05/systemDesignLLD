#ifndef NETFLIXVIDEOPROCESSING_H
#define NETFLIXVIDEOPROCESSING_H
#include<iostream>
#include "VideoProcessing.h"
// concrete Abstraction
class NetflixVideoProcessing: public VideoProcessing{
    public:
      void processVideo()
      {
        std::cout<<"video is processed by NETFLIX.."<<std::endl;
      }
};
#endif