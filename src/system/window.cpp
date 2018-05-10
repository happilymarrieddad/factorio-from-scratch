class Window {
public:
	static void HandleGlobalEvents(SDL_Event* e,GLint* mouseX,GLint* mouseY) {
		if (e->type != SDL_WINDOWEVENT) {
			return;
		}
		
		switch(e->window.event) {

			case SDL_WINDOWEVENT_SIZE_CHANGED:
				SCREEN_WIDTH = e->window.data1;
				SCREEN_HEIGHT = e->window.data2;
				// SDL_RenderPresent(renderer);
				break;

			case SDL_WINDOWEVENT_EXPOSED:
	            // SDL_RenderPresent( renderer );
	            break;

	        case SDL_WINDOWEVENT_ENTER:
	        	isMouseInWindow = GL_TRUE;
	        	break;

	        case SDL_WINDOWEVENT_LEAVE:
	        	isMouseInWindow = GL_FALSE;
	        	break;

	        case SDL_WINDOWEVENT_FOCUS_GAINED:
	            isKeyboardFocus = GL_TRUE;
	            break;

	        case SDL_WINDOWEVENT_FOCUS_LOST:
	            isKeyboardFocus = GL_FALSE;
	            break;

	        case SDL_WINDOWEVENT_MINIMIZED:
	            break;

            case SDL_WINDOWEVENT_MAXIMIZED:
	            break;
            
            case SDL_WINDOWEVENT_RESTORED:
            	break;
		
		}
	}
};