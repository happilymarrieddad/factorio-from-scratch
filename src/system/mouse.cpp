class Mouse {
public:
	static void HandleGlobalEvents(SDL_Event* e,GLint* mouseX,GLint* mouseY) {

		switch(e->type) {

			case SDL_MOUSEBUTTONDOWN:
				switch(e->button.button) {

					case SDL_BUTTON_LEFT:
						break;

					case SDL_BUTTON_MIDDLE:
						break;

					case SDL_BUTTON_RIGHT:
						break;

					case SDL_BUTTON_X1:
						break;

					case SDL_BUTTON_X2:
						break;

				}
				break;

			case SDL_MOUSEBUTTONUP:
				switch(e->button.button) {

					case SDL_BUTTON_LEFT:
						break;

					case SDL_BUTTON_MIDDLE:
						break;

					case SDL_BUTTON_RIGHT:
						break;

					case SDL_BUTTON_X1:
						break;

					case SDL_BUTTON_X2:
						break;

				}
				break;

			case SDL_MOUSEWHEEL:
				if(e->wheel.y > 0) { // scroll up
		             // Pull up code here!
		        } else if(e->wheel.y < 0) { // scroll down
		             // Pull down code here!
		        }

		        if(e->wheel.x > 0) { // scroll right
		             // ...
		        } else if(e->wheel.x < 0) { // scroll left
		             // ...
		        }
				break;

		}
	}
};