#include <iostream>

using namespace std;


enum MODES {
	MAIN_MENU_1_LOADING = 100000,
	MAIN_MENU_1,
	GAME_LOADING,
	GAME_RUNNING
};


int main(int argc, char const *argv[])
{
	cout << MAIN_MENU_1_LOADING << endl
		 << MAIN_MENU_1 << endl
		 << GAME_LOADING << endl
		 << GAME_RUNNING << endl;


	return 0;
}