#include "app.hpp"

void App::init() {
	if (!OpenGL::init()) {
		running = false;
	}

	if (!SDL::init()) {
		running = false;
	}

	if (!OpenGL::start()) {
		running = false;
	}

	countedFrames = 0;
	fpsTimer.start();
}

void App::start() {

	while(running) {
		capTimer.start();

		GLfloat avgFPS = countedFrames / ( fpsTimer.getTicks() / 1000.0f );
		if (avgFPS > 2000000) {
			avgFPS = 0;
		}

		std::cout << "Average FPS: " << avgFPS << std::endl;
		
		// Handle inputs
		SDL_GetMouseState(&mouseX,&mouseY);

		while(SDL_PollEvent(&mainEvents) != 0) {
			if (mainEvents.type == SDL_QUIT) {
				running = false;
			}

			// These aren't really necessary but I wanted them more as examples
			// I'll remove them once the app is up and running
			Keyboard::HandleGlobalEvents(&mainEvents,&mouseX,&mouseY);
			Mouse::HandleGlobalEvents(&mainEvents,&mouseX,&mouseY);
			Window::HandleGlobalEvents(&mainEvents,&mouseX,&mouseY);
		}

		// Clear Screen
		// SDL_SetRenderDrawColor(renderer,0xFF,0xFF,0xFF,0xFF);
		// SDL_RenderClear(renderer);


		// Render everything
		glClear( GL_COLOR_BUFFER_BIT );
		render();

		// Update screen
		SDL_GL_SwapWindow( window );


		countedFrames++;
		GLint frameTicks = capTimer.getTicks();
		if (frameTicks < SCREEN_TICKS_PER_FRAME) {
			SDL_Delay(SCREEN_TICKS_PER_FRAME - frameTicks);
		}
	}

}



void App::render() {

}

void App::cleanup() {
	SDL::cleanup();
	OpenGL::cleanup();
}