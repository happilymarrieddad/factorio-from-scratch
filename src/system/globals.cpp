SDL_Window* window = NULL;
SDL_Surface* surface = NULL;
//SDL_Renderer* renderer = NULL;
SDL_GLContext context;

SDL_Event mainEvents;
GLint mouseX = 0;
GLint mouseY = 0;
GLboolean isMouseInWindow = GL_FALSE;
GLboolean isKeyboardFocus = GL_FALSE;

GLboolean running = GL_TRUE;
Timer fpsTimer;
Timer capTimer;
GLint countedFrames;

GLint OPENGL_MAJOR_VERSION = 3;
GLint OPENGL_MINOR_VERSION = 1;

const char* APPLICATION_NAME = "Factorio";
GLint SCREEN_HEIGHT = 768;
GLint SCREEN_WIDTH = 1024;
const GLint SCREEN_FPS = 30;
const GLint SCREEN_TICKS_PER_FRAME = 1000 / SCREEN_FPS;