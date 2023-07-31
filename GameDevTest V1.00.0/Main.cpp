#include "main.h"

#include <iostream>
#include <string>

using namespace std;

void Main::startMain()
{
	cout << "Welcome player" << endl;

	string pname;
	cout << "What is thou name?:";
	getline(cin, pname);

	cout << pname + " are you ready?!" << endl;

}

int main()
{
	Main game;
	game.startMain();

	return 0;

}