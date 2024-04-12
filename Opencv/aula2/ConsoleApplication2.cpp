#include "iostream"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

int main()
{
	std::string caminho = "C:/Users/vinicius/Desktop/OpenCoding/cpp/VisaoComputacional/images/praia.jpg";

	cv::Mat img = cv::imread(caminho,cv::IMREAD_COLOR);
	cv::Mat bilateralImg, gaussianImg, medianImg;

	cv::GaussianBlur(img, gaussianImg, cv::Size(15,15),0);
	cv::bilateralFilter(img, bilateralImg, 15, 95, 45);
	cv::medianBlur(img, medianImg, 15);

	cv::imshow("bilateral", bilateralImg);
	cv::imshow("median", medianImg);
	cv::imshow("gaussian", gaussianImg);
	cv::imshow("window", img);


	cv::waitKey(0);
}