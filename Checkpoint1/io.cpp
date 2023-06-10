#include <iostream>

float askVolume(){

    std::cout << "Input volume: ";
    float volume {};
    std::cin >> volume;

    return volume;
}

void printRadius(float value){

    std::cout << "The radius of the sphere is: " << value << " m\n"; 
}

void printSurfaceArea(float value){

    std::cout << "The surface area of the sphere is: " << value << " m^2\n";
}
