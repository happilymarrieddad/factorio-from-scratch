class Timer {
public:
	Timer();

	void start();
	void stop();
	void pause();
	void unpause();

	GLuint getTicks();

	GLboolean isStarted();
	GLboolean isPaused();

private:
	GLuint startTicks;
	GLuint pausedTicks;

	GLboolean paused;
	GLboolean started;
};