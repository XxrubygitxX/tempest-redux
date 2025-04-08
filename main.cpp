
#include <iostream>
#include "IACengine/IAC.cpp"
#include "IACengine/point.h"
#include "IACengine/primitives.h"
#include "IACengine/scene.h"


///////////////////////////////////////////////////////////////////
// Our update function (ran every frame)
///////////////////////////////////////////////////////////////////

void IAC::update()
{

}

int main(int argc, char* argv[])

{

    
    
    IAC* engine = new IAC(800, 600);

    if (engine->Initialize())
    {
        engine->start();
    }

    delete engine;
    engine = nullptr;

    return 0;

}