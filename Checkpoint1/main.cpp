#include "io.h"
#include "calculations.h"

int main(){

    float volume {askVolume()};
    float radius {findRadius(volume)};
    float surfaceArea {findSurfaceArea(radius)};

    printRadius(radius);
    printSurfaceArea(surfaceArea);

    return 0;
}
