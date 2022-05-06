#pragma once

namespace PixelEngine
{
    class Math
    {
        float linearSlopeY(float x, float slope, float offSet)
        {
            float y = (slope * x) + offSet; //y = mx + b
            return y;
        }
    };
}