#include <iostream>

#include "component.h"
#include "vec2.h"

PixelEngine::Component::Component(VEC_BUF_TYPE vertexBuffer)
{
    this->vertBuffer = vertexBuffer;
}

VEC_BUF_TYPE PixelEngine::Component::getVerts()
{
    return this->vertBuffer;   
}