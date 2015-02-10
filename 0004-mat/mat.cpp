#include <iostream>
#include <opencv2/core.hpp>
 
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    /* MAT Constructor */
    Mat M(2,2, CV_8UC3, Scalar(0,0,255));
    cout << "M = " << endl << " " << M << endl << endl;

    /* Create() Function */
    M.create(4,4, CV_8UC(2));
    cout << "M = "<< endl << " "  << M << endl << endl;

    /* MATLAB style initializer: zeros(), ones(), eyes() */
    Mat E = Mat::eye(4, 4, CV_64F);
    cout << "E = " << endl << " " << E << endl << endl;

    Mat O = Mat::ones(2, 2, CV_32F);
    cout << "O = " << endl << " " << O << endl << endl;

    Mat Z = Mat::zeros(3,3, CV_8UC1);
    cout << "Z = " << endl << " " << Z << endl << endl;

    /* Small matricies, use csv */
    Mat C = (Mat_<double>(3,3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
    cout << "C = " << endl << " " << C << endl << endl;

    /* clone() or copyTo() */
    Mat RowClone = C.row(1).clone();
    cout << "RowClone = " << endl << " " << RowClone << endl << endl;

    /* randu() */
    Mat R = Mat(3, 2, CV_8UC3);
    randu(R, Scalar::all(0), Scalar::all(255));

    /* Output formatting with R */
    cout << "R (default) = " << endl <<        R           << endl << endl;

    /* 2D Point */
    Point2f P(5, 1);
    cout << "Point (2D) = " << P << endl << endl;

    /* 3D Point */
    Point3f P3f(2, 6, 7);
    cout << "Point (3D) = " << P3f << endl << endl;

    /* std::vector via cv::Mat */
    vector<float> v;
    v.push_back((float)CV_PI);
    v.push_back(2);
    v.push_back(3.01f);
    cout << "Vector of floats via Mat = " << Mat(v) << endl << endl;

    /* std::vector of points */
    vector<Point2f> vPoints(20);
    for (size_t i = 0; i < vPoints.size(); ++i){
        vPoints[i] = Point2f((float)(i * 5), (float)(i % 7));
    }
    cout << "A vector of 2D Points = " << vPoints << endl << endl;


    return 0;
}
