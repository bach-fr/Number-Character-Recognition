#include "NCR.hpp"

int main() {
	cv::Mat image;
	image = cv::imread("../img/0.png", CV_LOAD_IMAGE_COLOR); 
	cv::imshow( "Display window", image );
	cv::waitKey(0);

	NCR ncr;
	return ncr.test();
}

int NCR::test() {
	std::cout << "Hello world !" << std::endl;
	return 0;
}
