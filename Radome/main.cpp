//
//  main.cpp
//  Radome
//
//  Created by Xinchao on 15.08.19.
//  Copyright © 2019 Hesi. All rights reserved.
//
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>
#include <iostream>
#include <ctime>
//#include <direct.h>

using namespace std;
using namespace cv;

string cwp = "/Users/xinchao/GoogleDrive/Projects/HeSi/Radome/Radome/";

int main(int argc, const char * argv[]) {
    
    Mat test = imread(cwp + "/img/yellow/1-250us.bmp");
    imshow("test", test);
    
    
    waitKey();
    return 0;
}
