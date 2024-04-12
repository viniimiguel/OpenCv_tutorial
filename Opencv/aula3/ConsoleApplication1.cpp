#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
	std::string folder = "C:/Users/vinicius/Desktop/OpenCoding/OpenCv_tutorial/Opencv/images/praia.jpg";
	
	cv::Mat	img = cv::imread(folder, cv::IMREAD_COLOR);
	cv::Mat erodeMat, dilateMat;
	cv::Mat elementKernel = cv::getStructuringElement(cv::MORPH_ELLIPSE,cv::Size(15,15), cv::Point(-1,-1));

	cv::erode(img, erodeMat, elementKernel, cv::Point(-1,-1),1);
	cv::dilate(img, dilateMat, elementKernel, cv::Point(-1, -1), 1);

	cv::imshow("erode", erodeMat);
	cv::imshow("dilate", dilateMat);
	cv::imshow("window", img);

	cv::waitKey(0);
	return 0;
}