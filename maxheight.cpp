#include <cmath>

const float g = 9.81 ;

float maxheight(float v, float theta) // define the max height function
{
    return std::pow(v * std::sin(theta),2) / (2 * g) ;
}