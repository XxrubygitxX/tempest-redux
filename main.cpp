
#include <iostream>
#include "IACengine/IAC.cpp"

///////////////////////////////////////////////////////////////////
// Our setup function (ran once)
///////////////////////////////////////////////////////////////////

void IAC::setup()
{
    
}


///////////////////////////////////////////////////////////////////
// Our update function (ran every frame)
///////////////////////////////////////////////////////////////////

void IAC::update()
{

}

int main(int argc, char* argv[])

{

    IAC* engine = new IAC(800, 600, "IAC");

    if (engine->Initialize())
    {
        engine->start();
    }

    return 0;

}
