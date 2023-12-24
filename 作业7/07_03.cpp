#include <opencv2/opencv.hpp>
#include <iostream>

int main() {

    cv::Mat originalImage = cv::imread("/Users/tusihang/Documents/hutuhouse/作业7/build/123.png");
    
    if (originalImage.empty()) {
        std::cerr << "Error: Could not load the image." << std::endl;
        return -1;
    }

    cv::Mat edges;
    cv::Canny(originalImage, edges, 50, 150);

    cv::Mat dilatedImage;
    cv::dilate(edges, dilatedImage, cv::Mat(), cv::Point(-1, -1), 2, 1, 1);

    cv::Mat erodedImage;
    cv::erode(dilatedImage, erodedImage, cv::Mat(), cv::Point(-1, -1), 2, 1, 1);

    cv::Mat resizedImage;
    cv::resize(originalImage, resizedImage, cv::Size(), 0.5, 0.5);

    cv::namedWindow("Original Image", cv::WINDOW_NORMAL);
    cv::imshow("Original Image", originalImage);

    cv::namedWindow("Processed Image", cv::WINDOW_NORMAL);
    cv::imshow("Processed Image", erodedImage);

    cv::waitKey(0);

    return 0;
}
