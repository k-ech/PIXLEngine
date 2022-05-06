#include <iostream>
#include "pixlEngine.h"

using namespace PixelEngine;

PixelEngine::Scene::Scene(int x, int y, std::string outFile)
{
    if (outFile.find(".tga") > outFile.length())
        throw std::runtime_error("[Error] Output file must be of type (.tga)");

    this->outputFile = outFile;

    this->scene = PixelEngine::Render(x, y, Render::RGB);
    scene.flip_vertically();
}

void PixelEngine::Scene::drawPixel(int x, int y, PixelColor color)
{
    this->scene.set(x, y, color);
}

void PixelEngine::Scene::render()
{
    this->scene.write_tga_file(this->outputFile);
}