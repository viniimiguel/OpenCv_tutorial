#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main() {
	std::string folder = "C:/Users/vinicius/Desktop/OpenCoding/cpp/VisaoComputacional/images/praia.jpg";

	cv::Mat img = cv::imread(folder, cv::IMREAD_COLOR);

	cv::imshow("window", img);
	cv::waitKey(0);
	return 0;
}