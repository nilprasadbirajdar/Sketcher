#include "../header/point3D.h"
#include "../header/reader.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include "../header/triangle.h"
 
Reader::Reader(std::string file_path)
{
    mFilePath=file_path;
}
 
Reader::~Reader(){
 
}
 
void Reader ::get_triangles(std::vector<Triangle>& triangles)
{
    std::ifstream dataFile;
    dataFile.open(mFilePath);
    int count=0;
    if (!dataFile.is_open()) {
        std::cout<<"File not exist"<<std::endl;
        return ;
    }
 
    std::string line;
 
    while (std::getline(dataFile, line)) {
        if (line.find("vertex") != std::string::npos) {
            std::istringstream iss(line);
            std::string token;
            double x, y, z;
            iss >> token >> x >> y >> z;
            Point3D point1(x, y, z);
            std::getline(dataFile,line);
            std::istringstream iss2(line);

            iss2>> token >> x >> y >> z;
            Point3D point2(x, y, z);
            
            std::istringstream iss3(line);

            std::getline(dataFile,line);
            iss3 >> token >> x >> y >> z;
            Point3D point3(x, y, z);
            Triangle triangle(point1,point2,point3);
            triangles.push_back(triangle);
            count++;
        }
    }
    std::cout<<count;
    dataFile.close();
    return;

}

        
 