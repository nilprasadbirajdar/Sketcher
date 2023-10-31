#pragma once
#include <vector>
#include <string>
#include "./point3D.h"
#include "../header/triangle.h"
 // reader class will read the stl file for getting vertex data
class Reader {
public:
    // Constructor, initialize file path
    Reader(std::string location);
    
    // Destructor, clean up resources
    ~Reader();

    // Access point cloud data 
    void get_triangles(std::vector<Triangle> &triangles);
 
private:
    std::string mFilePath;
};