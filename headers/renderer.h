//
// Created by ali on 7/14/18.
//

#ifndef MYSNOOKER_RENDERER_H
#define MYSNOOKER_RENDERER_H

#include <SFML/Graphics.hpp>
#include "ball.h"

class Rendering {
public:
    Rendering(RenderWindow *window);

    void renderer(Ball **balls,std::string result);

    int get();

private:
    RenderWindow *window;
    CircleShape shape[17];

    Text result;
    Texture pic[18];
    Sprite background;
};

#endif //MYSNOOKER_RENDERER_H
