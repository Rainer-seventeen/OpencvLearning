#ifndef IMG_SIMPLE_H
#define IMG_SIMPLE_H


#include <opencv2/opencv.hpp>

namespace tools
{
    void ImgGrayHSV(cv::Mat img); //生成图片的灰度图和HSV图
    void ImgOnBackground(cv::Mat img, cv::Mat &background, int x, int y);
    void ShowImgData(cv::Mat img, bool show_mat = false);//展示图片的基础信息
    void ShowImgPixel(cv::Mat img, int x, int y);//显示某个像素点的信息

    cv::Mat CreateNewMat(int cols, int rows, int B = 0, int G = 0, int R = 0);//创建一个新的纯色图片
}


#endif
