#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("/Users/tusihang/Documents/hutuhouse/作业7/build/123.png");
    cv::imshow("Image", image);
    
    while (true) {
        int key = cv::waitKey(0);
        
        if (key == 27) { 
            break;
        }
    }

    cv::VideoCapture video("path/to/your/video.mp4");
    
    while (true) {
        cv::Mat frame;
        video >> frame;
        
        if (frame.empty()) {
            break;
        }
        
        cv::imshow("Video", frame);
        
        int key = cv::waitKey(30); 
        
        if (key == 27) {
            break;
        }
    }
    cv::VideoCapture camera(0);  
    
    if (!camera.isOpened()) {
        std::cerr << "Error: Unable to open camera." << std::endl;
        return -1;
    }
    
    while (true) {
        cv::Mat frame;
        camera >> frame;
        
        if (frame.empty()) {
            std::cerr << "Error: Unable to capture frame." << std::endl;
            break;
        }
        
        cv::imshow("Camera", frame);
        
        int key = cv::waitKey(30);
        
        if (key == 27) {
            break;
        }
    }

    cv::destroyAllWindows();
    return 0;
}
