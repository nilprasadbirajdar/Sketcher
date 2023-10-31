#include "../header/triangulation.h"
#include "../header/triangle.h"

Triangulation::Triangulation(std::vector<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}
Triangulation::~Triangulation()
{

}
std::vector<Triangle> Triangulation::get_triangles(){
    return mTriangles;
}