class Keyboard {
public:
	static void HandleGlobalEvents(SDL_Event* e,GLint* mouseX,GLint* mouseY) {
		switch(e->type) {

			// https://wiki.libsdl.org/SDL_Keycode
			case SDL_KEYDOWN:
				switch(e->key.keysym.sym) {
					case SDLK_UP:
						break;
					case SDLK_DOWN:
						break;
					case SDLK_LEFT:
						break;
					case SDLK_RIGHT:
						break;
				}
				break;

			case SDL_KEYUP:
				break;

		}
	}
};