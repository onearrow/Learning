#ifndef TOOLSINSPECTION_H
#define TOOLSINSPECTION_H

#include "toolsinspection_global.h"
#include <vector>
#include "opencv2/core/core.hpp"

using namespace cv;
class InspectionManage;

class TOOLSINSPECTIONLIBSHARED_EXPORT ToolsInspection
{
public:
	ToolsInspection();
	~ToolsInspection();
    bool setTmplImageAndMarker(cv::Mat tmplImage,
                               std::vector<cv::Rect> markerList = std::vector<cv::Rect>());

    int inspection(cv::Mat inspectImage, cv::Mat toolImage,
                   cv::Rect toolRect, Rect &resRect);

private:
    InspectionManage * _pManage;

};

#endif //TOOLSINSPECTION_H

