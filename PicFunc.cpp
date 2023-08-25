#include<opencv2/opencv.hpp>

using namespace cv;

void PicturePrint(std::string PictureName) {
	Mat src = imread(PictureName);
	Mat dst;
	int height = src.rows;
	int width = src.cols;
	if (height >= 800) {
		resize(src, dst, Size(), 0.5, 0.5);
		src = dst;
	}
	namedWindow(PictureName);
	imshow(PictureName, src);
	waitKey(0);
}