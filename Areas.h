#ifndef _AREAS_H
#define _AREAS_H

#include <string>
using namespace std;
#include <iostream>

class Areas {

    public: 
        // returns area of square
        double squareArea(double size);

        // returns area of a triangle
        double triangleArea(double base, double height);

        //returns area of a rectangle
        double rectArea(double width, double length);

};

#endif