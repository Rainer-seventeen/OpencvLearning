#include <cstdio>
#include <opencv2/opencv.hpp>

#include "ImgSimple.h"

using namespace cv;

int main(int argc, char** argv )
{
    
    Mat Elena = imread("cv_pictures/Elena.png",IMREAD_COLOR);
    //namedWindow("Elena",WINDOW_FREERATIO);
    //imshow("Elena", Elena);

    // Mat Google = imread("cv_pictures/Google.png", IMREAD_UNCHANGED);//TODO:透明图片的读取
    // namedWindow("Google",WINDOW_AUTOSIZE);
    // imshow("Google", Google);

    // Mat Lenovo = imread("cv_pictures/Lenovo.jpg",IMREAD_GRAYSCALE);
    // namedWindow("Lenovo",WINDOW_FREERATIO);
    // imshow("Lenovo", Lenovo);

    //tools::ImgGrayHSV(Elena);
    //tools::ShowImgData(Elena);



    waitKey(0);
    destroyAllWindows();
    return 0;
    
}