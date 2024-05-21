#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

int main() {
	cv::VideoCapture cap("C:\\Users\\vinicius\\Desktop\\OpenCoding\\cpp\\OpenCvUdemy\\abrircamera\\video\\obs.mp4"); // caso eu queira exivir um cideo ao envez da minha webcam basta passar o caminho do video ao envez do numero "0"
	cv::Mat img;
	while (true) {
		cap.read(img);
		cv::imshow("minhaCamera", img);
		cv::waitKey(1);
	}
	
	return 0;
}