#include <string>
using namespace std;
#include <iostream>
#include "Areas.h"


double Areas::squareArea(double size) {
    return size * size;
}

double Areas::triangleArea(double base, double height) {
    return base * height * .5;
}

double Areas::rectArea(double width, double length) {
    return width * length;
}

