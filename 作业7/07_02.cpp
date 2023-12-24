#include <opencv2/opencv.hpp>

int main() {
    cv::Mat originalImage = cv::imread("/Users/tusihang/Documents/hutuhouse/作业7/build/123.png");

    if (originalImage.empty()) {
        std::cerr << "Error: Unable to load image." << std::endl;
        return -1;
    }

    cv::Mat grayImage;
    cv::cvtColor(originalImage, grayImage, cv::COLOR_BGR2GRAY);

    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);

    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0);

    cv::imshow("Original Image", originalImage);
    cv::imshow("Gray Image", grayImage);
    cv::imshow("Binary Image", binaryImage);
    cv::imshow("Blurred Image", blurredImage);

    cv::waitKey(0);

    return 0;
}//使用编译命令：cd "/Users/tusihang/Documents/hutuhouse/" && g++ -std=c++11 07_02.cpp `pkg-config --cflags --libs opencv4` -o 07_02 && "/Users/tusihang/Documents/hutuhouse/"07_02

