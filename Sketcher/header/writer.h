#pragma once 
#include <string>
#include<vector>
#include "../header/triangle.h"
class Writer {
    public:
        Writer();
        ~Writer();

        void write(std::string FilePath,std::vector<Triangle>& triangles);
        

    private:


};