#pragma once

#define VEC_BUF_TYPE std::vector<PixelEngine::Vec2, std::allocator<PixelEngine::Vec2>> 

#include <iostream>

#include "pixlEngine.h"
#include "vec2.h"

using namespace PixelEngine;

namespace PixelEngine
{
    class Component
    {
    private:
        VEC_BUF_TYPE vertBuffer;
    public: 
        Component(VEC_BUF_TYPE vertexBuffer);

        VEC_BUF_TYPE getVerts();
    };
}