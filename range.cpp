#include <cmath>

const float g = 9.81 ;

float range(float v, float theta) // define the range function
{
    return (std::pow(v,2) * std::sin(2 * theta)) / g ;
}
