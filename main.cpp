#include <iostream>
#include "flighttime.h"
#include "maxheight.h"
#include "range.h"

int main() {

    // declare and assign the arguments for the flight time function

    float v = 0 ; 
    float theta = 0 ;

    std::cout << "Please enter the velocity of the object in seconds " << "\n" ;
    std::cin >> v ;
    
    std::cout << "Please enter the launch angle of the object in radians " << "\n" ;
    std::cin >> theta ;

    std::cout << "The total flight time of the object is " << flighttime(v,theta) << " seconds" << "\n" ;
    std::cout << "The max height of the object is " << maxheight(v,theta) << " metres" << "\n" ;
    std::cout << "The range of the object is " << range(v,theta) << " metres" << "\n" ;

    return 0;
}