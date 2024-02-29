#include <opencv2/opencv.hpp>
using namespace cv;

void ORBextractor(OutputArray& _descriptors) {
    // 创建一个空的 Mat 对象作为输出数组
    cv::Mat descriptors;

    // 创建描述子矩阵的输出数组
    _descriptors.create(1000, 32, CV_8U);

    descriptors = _descriptors.getMat();
    Mat desc = descriptors.rowRange(0, 100);

    // 在这里修改 desc 中的内容
    for (int i = 0; i < desc.rows; ++i) {
        for (int j = 0; j < desc.cols; ++j) {
            desc.at<uchar>(i, j) = 255; // 设置为全白
        }
    }

    // 验证 descriptors 和 _descriptors 是否被更改
    std::cout << descriptors.row(0) << std::endl;
    std::cout << _descriptors.getMat().row(0) << std::endl;
    std::cout << "aaaaaa" << std::endl;
}

int main() {
    cv::Mat test;
    ORBextractor(test);
    return 0;
}
