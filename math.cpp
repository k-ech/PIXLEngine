#include "pixlEngine.h"
#include "math.h"

using namespace PixelEngine;

float Math::linearSlopeY(float x, float slope, float offSet)
{
    float y = (slope * x) + offSet; //y = mx + b
    return y;
}