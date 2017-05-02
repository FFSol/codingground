#include <iostream>
#include <stdexcept>
#include "Circle.h"
using namespace std;

Circle::Circle(double r, double x, double y) : TwoDimensionalShape(x, y)
{
    if(r>=0.0)
        radius = r;
    else
        throw invalid_argument("Radius must be >= 0.0");
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return 3.14159*radius*radius;
}

void Circle::print() const
{
    cout<<"Circle with radius "<<radius<<"; center at ("
        <<xCenter<<","<<yCenter<<")";
}

