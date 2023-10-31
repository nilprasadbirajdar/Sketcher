#include<iostream>
#include<vector>
#include "../header/reader.h"
#include "../header/triangle.h"
#include "../header/triangulation.h"
#include "../header/writer.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("D:\\Projects\\Sketcher\\resources\\solid_CubeModel.stl");
    reader.get_triangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.get_triangles();
    writer.write("D:\\Projects\\Sketcher\\output\\final.txt", outTriangles);


    // std::cout<<triangles.size()<<std::endl;

    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
}