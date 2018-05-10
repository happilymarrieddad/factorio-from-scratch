class SDL {
public:
	static GLboolean init() {
		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
			return false;
		}

		window = SDL_CreateWindow(
			APPLICATION_NAME,
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH,
			SCREEN_HEIGHT,
			SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN
		);

		if (window == NULL) {
			std::cout << "Unable to create window! SDL_Error: " << SDL_GetError() << std::endl;
			return false;
		}

		context = SDL_GL_CreateContext(window);
		if (context == NULL) {
			std::cout << "Unable to create context! SDL_Error: " << SDL_GetError() << std::endl;
			return false;
		}

		if (SDL_GL_SetSwapInterval(1) < 0) {
			std::cout << "Warning: Unable to set VSync! SDL_Error: " << SDL_GetError() << std::endl;
		}

		// renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
		// if (renderer == NULL) {
		// 	std::cout << "Unable to create renderer! SDL_Error: " << SDL_GetError() << std::endl;
		// 	return false;
		// }

		// surface = SDL_GetWindowSurface(window);

		return true;
	}

	static void cleanup() {
		// Takes care of the surface as well.
		SDL_DestroyWindow(window);
		window = NULL;

		SDL_Quit();
	}
};