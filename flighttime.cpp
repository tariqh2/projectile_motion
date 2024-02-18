#include <cmath>

const float g = 9.81 ; // assume g is a constant 

float flighttime(float v, float theta) // set up the function to calculate flight time

{
    return (2 * v * std::sin(theta)) / g ; // note in cmath trigonometric functions expect theta to be in radians
}