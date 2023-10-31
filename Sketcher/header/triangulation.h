#include <vector>
#include "../header/triangle.h"
#include "../header/bbox.h"


class Triangulation
{
    public:
        Triangulation(std::vector<Triangle> triangles);
        ~Triangulation();
        std::vector<Triangle> get_triangles();
    private:
        std::vector<Triangle> mTriangles;
        BBox mBBox;

};