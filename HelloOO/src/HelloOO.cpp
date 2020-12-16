//============================================================================
// Name        : HelloOO.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : No rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "World.h"

#include <iostream>
using namespace std;

void test();

World shire("The Shire");

int main() {

	World* mordor = new World("Mordor");

	test();

	mordor->sayHello();
	shire.sayHi();

	delete mordor;

	return 0;
}

void test(){
	World earth("Earth");
	shire.sayGoodbye();
	cout << "Running test()" << endl;
	earth.sayHi();
}
