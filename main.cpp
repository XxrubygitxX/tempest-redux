
#include <iostream>
#include "IACengine/IAC.cpp"

void IAC::setup()
{
    
}

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