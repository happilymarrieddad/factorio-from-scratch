// Graphics Libs
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

// STL Libs
#include <iostream>
#include <ctime>
#include <memory>

// Custom Libs
#include "../lib/smart_pointer.cpp"
#include "../lib/Timer/Timer.cpp"

// Includes
#include "system/modes.cpp"
#include "system/colors.cpp"
#include "system/globals.cpp"
#include "system/window.cpp"
#include "system/opengl.cpp"
#include "system/sdl.cpp"
#include "system/keyboard.cpp"
#include "system/mouse.cpp"

#include "system/app.cpp"

int main(int argc, char const *argv[])
{
	App::init();
	App::start();
	App::cleanup();

	return 0;
}