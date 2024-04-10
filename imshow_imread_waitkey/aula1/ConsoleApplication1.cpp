#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

int main() {
	cv::Mat img = cv::imread("C:\\Users\\vinicius\\Desktop\\OpenCoding\\cpp\\Visao_Computacional\\aula1\\images\\scooby.jpg",cv::IMREAD_GRAYSCALE);
	cv::imshow("Window", img);
	cv::waitKey(0);

	return 0;
}