class OpenGL {
public:
	static GLboolean init() {
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION,OPENGL_MAJOR_VERSION );
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION,OPENGL_MINOR_VERSION );
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );

		return true;
	}
	static GLboolean start() {
		GLenum error = GL_NO_ERROR;

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();

		error = glGetError();
		if (error != GL_NO_ERROR) {
			std::cout << "Error initializing OpenGL! " << gluErrorString(error) << std::endl; 
			return false;
		}

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		error = glGetError();
		if (error != GL_NO_ERROR) {
			std::cout << "Error initializing OpenGL! " << gluErrorString(error) << std::endl; 
			return false;
		}

		glClearColor( 0.f, 0.f, 0.f, 1.f );

		error = glGetError();
		if (error != GL_NO_ERROR) {
			std::cout << "Error initializing OpenGL! " << gluErrorString(error) << std::endl; 
			return false;
		}

		return true;
	}

	static void cleanup() {

	}
};