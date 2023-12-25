#include "YouTubeVideoProcessing.h"
#include "HDVideoQuality.h"
#include "FOURKVideoQuality.h"
#include "NetflixVideoProcessing.h"
#include "VideoProcessor.h"

int main() {
    VideoProcessing* youtubeProcessing = new YouTubeVideoProcessing();
    VideoQualityMode* hdQuality = new HDVideoQuality();

    VideoProcessor* processor1 = new VideoProcessor(youtubeProcessing, hdQuality);
    processor1->process();

    VideoProcessing* netflixProcessing = new NetflixVideoProcessing();
   // VideoQualityMode* hdQuality = new HDVideoQuality();

   VideoProcessor* processor2 = new VideoProcessor(netflixProcessing, hdQuality);
   processor2->process();

    return 0;
}