#include "tgaimage.h"
#include "vec2.h"
#include "component.h"
#include "triangle.h"

using namespace PixelEngine;


#define WHITE   PixelColor(255, 255, 255, 255);
#define BLACK   PixelColor(255, 255, 255, 255);

#define BLUE    PixelColor(0, 0, 255, 255);
#define RED     PixelColor(255, 0, 0, 255);
#define GREEN   PixelColor(0, 255, 0, 255);
#define YELLOW  PixelColor(255, 255, 255, 255);
#define ORANGE  PixelColor(255, 255, 255, 255);
#define PURPLE  PixelColor(255, 255, 255, 255);
#define BROWN   PixelColor(255, 255, 255, 255);

namespace PixelEngine
{
    class Scene
    {
    private:
        PixelEngine::Render scene;
        std::string outputFile;
    public:
        Scene(int width, int height, std::string outFile);

        void drawPixel(int x, int y, PixelEngine::PixelColor color);
        void render();
    };
}