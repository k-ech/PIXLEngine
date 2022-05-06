#include <iostream>
#include <vector>
#include <math.h>

namespace PixelEngine
{
    class Vec2
    {
    private:
        float x;
        float y;
    public:
        Vec2(float x, float y);

        void normalize();
        float dotProduct(Vec2 &vec);
        float crossProduct(Vec2 &vec);

        float operator * (Vec2 &right);
        Vec2 operator + (Vec2 &right);
        Vec2 operator - (Vec2 &right);
    };
}