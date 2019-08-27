#include <iostream>
// #include <opencv2/opencv.hpp>

int main(int argc, char* argv[]){
	if(argc < 2){
		std::cout<<argv[0]<<" image"<<std::endl;
		return -1;
	}
	std::cout<<"Your Image: "<<argv[1]<<std::endl;
	// auto img = cv::imread(argv[1]);
	// cv::imshow("Your Image", img);
	// cv::waitKey(0);
	return 0;
}
