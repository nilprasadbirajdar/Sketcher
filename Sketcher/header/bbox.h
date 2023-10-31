#pragma once
#include <vector>
#include "../header/point3D.h"
#include "../header/triangle.h"


class BBox{
    public:
        BBox(std::vector<Triangle> traingles);
        ~BBox();

    private:
        void calculateBBox(std::vector<Triangle> traingles); 
        void compareAndUpdate(Point3D refP, Point3D& min, Point3D& max); 
    private:
        Point3D mMin;
        Point3D mMax;
        Point3D mCenter;

};
