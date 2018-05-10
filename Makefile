CC=g++
CLIB=c++14
APP_NAME=factorio
ENTRANCE_FILE=main.cpp
LINKER_FLAGS=-lSDL2 -lGL -lGLU


# Running the application
run:
	make build
	./bin/$(APP_NAME)




# Build the application
build:
	$(CC) src/$(ENTRANCE_FILE) --std=$(CLIB) $(LINKER_FLAGS) -o bin/$(APP_NAME)




# Installing dependencies
install:
	make install_opengl
	make install_sdl

install_opengl:
	sudo apt install libgl1-mesa-dev mesa-common-dev freeglut3-dev
install_sdl:
	sudo apt-get install libsdl2-dev libsdl-image1.2-dev libsdl-mixer1.2-dev libsdl-ttf2.0-dev





# System validation
check:
	make check_opengl

check_opengl:
	glxinfo | grep -i opengl
check_opengl_version:
	glxinfo | grep "OpenGL version"