#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;

    // Простая проверка - создать черное изображение
    cv::Mat image(100, 100, CV_8UC3, cv::Scalar(0, 0, 255));
    std::cout << "Image created: " << image.rows << "x" << image.cols << std::endl;

    return 0;
}