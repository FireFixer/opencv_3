#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
int main( int argc, char** argv )
{
Mat image = imread("Magic.jpeg");
Mat roi = image(Rect(100, 100, 400, 300));
Mat color(roi.size(), CV_8UC3, Scalar(0, 125, 0));
double alpha = 0.3;
addWeighted(color, alpha, roi, 1.0 - alpha , 0.0, roi);
imwrite ("../greenrecmagic.jpeg", image);
imshow("greenrecmagic",image);
waitKey(0);
}
