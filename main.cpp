// this is test edit yay!!!

#include <iostream>
#include "pixlEngine.h"

using namespace PixelEngine;

int main()
{
    int width = 1000;
    int height = 1000;

    PixelEngine::Scene scene = PixelEngine::Scene(width, height, "penis.tga");

    int x = 500;
    int y = 500;

    for (int i=0; i<1000; i++)
    {
        scene.drawPixel(i, y, PixelEngine::PixelColor(255, 0, 0, 255));
    }

    scene.render(); //render the pixel to the out.tga file

    return 0;
}
