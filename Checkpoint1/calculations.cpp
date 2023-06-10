#include <cmath>
#define PI std::atan(1)*4

float findRadius(float volume){

    return std::cbrt( 3*volume/4 )*10e-3;
}

float findSurfaceArea(float radius){

    return 4 * PI * std::pow(radius, 2) * 10e-6; 
}
