#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>

//MUDNADO COR DE IMAGENS 

//int main() {
//	std::string path = "C:\\Users\\vinicius\\Desktop\\OpenCoding\\cpp\\OpenCvUdemy\\alterandocoresdeumaimagem\\img\\image.jpeg";
//	cv::Mat img = cv::imread(path), imgRainbow, imgBw;
//
//	cv::cvtColor(img, imgRainbow, cv::COLORMAP_RAINBOW);
//	cv::cvtColor(img, imgBw, cv::COLOR_BGR2GRAY);
//
//	cv::imshow("original", img);
//	cv::imshow("rainbow", imgRainbow);
//	cv::imshow("image black && white", imgBw);
//	cv::waitKey(0);
//	return 0;
//}

//FILTRO GAUSSIANBLUR

//int main() {
//	std::string path = "C:\\Users\\vinicius\\Desktop\\OpenCoding\\cpp\\OpenCvUdemy\\alterandocoresdeumaimagem\\img\\image.jpeg";
//	cv::Mat img = cv::imread(path);
//	cv::Mat imgGaussian;
//	cv::imshow("original", img);
//	
//	cv::GaussianBlur(img, imgGaussian, cv::Size(15,15), 0);
//	cv::imshow("blur", imgGaussian);
//
//	cv::waitKey(0);
//	return 0;
//}

//IMAGE CANNY, ERODE, DILATION

int main() {
	std::string path = "C:\\Users\\vinicius\\Desktop\\OpenCoding\\cpp\\OpenCvUdemy\\alterandocoresdeumaimagem\\img\\image.jpeg";
	cv::Mat img = cv::imread(path);
	cv::Mat imgCanny, imgCannyDilated, imgErosion;

	cv::Canny(img, imgCanny, 6, 93);
	cv::dilate(imgCanny, imgCannyDilated, cv::getStructuringElement(2, cv::Size(4,4)));
	cv::erode(imgCanny, imgErosion, cv::getStructuringElement(1, cv::Size(2, 2)));
	
	cv::imshow("erosao", imgErosion);
	cv::imshow("canny", imgCanny);
	cv::imshow("canny dilatada", imgCannyDilated);
	cv::waitKey(0);
	return 0;
}



