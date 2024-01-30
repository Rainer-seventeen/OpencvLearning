#include <opencv2/opencv.hpp>

#include "ImgSimple.h"

using namespace cv;
namespace tools
{

void ImgGrayHSV(Mat img)
{
    Mat gray,hsv;
    cvtColor(img,gray,COLOR_BGR2GRAY);
    cvtColor(img,hsv,COLOR_BGR2HSV);
    imshow("Gray", gray);
    imshow("HSV", hsv);
    //imwrite("path/gray.png",gray);
    //imwrite("path/hsv.png",hsv);
}

void ImgOnBackground(Mat img, Mat &background, int x, int y)
{
    //TODO:透明图片的叠加
    //img - png ,backgroung - png
    for (int rows = 0; rows < x; rows++){
        for (int cols = 0 ; rows < y; cols++){


        }
    }
}

void ShowImgData(Mat img, bool show_mat)
{
    std::cout << "cols: "<<img.cols << " rows: " << img.rows << " channels: " << img.channels() << std::endl;
    if(show_mat)
        std::cout << img << std::endl;
}

void ShowImgPixel(cv::Mat img, int x, int y)
{
    if(img.channels() == 1)//Gray
        std::cout << "Gray: " << img.at<uchar>(x, y) << std::endl;
    if(img.channels() == 3)//Colored
    {
        Vec3b bgr = img.at<Vec3b>(x, y); //Vector-3-uchar
        std::cout << "B:" << 0 + bgr[0] << " G:" << 0 + bgr[1] << " R:" << 0 + bgr[2] << std::endl;
    }
}

Mat CreateNewMat(int cols, int rows, int B, int G, int R)
{
    Mat m1 = Mat::zeros(Size(cols, rows), CV_8UC3);
    m1 = Scalar(B, G, R);
    return m1;
}


} // namespace tools
