#ifndef HANGMANCONTROLLER_H
#define HANGMANCONTROLLER_H
#include "HangmanModel.h"
#include "HangmanView.h"
#include <iostream>
#include <cstdlib>
class HangmanController {
public:
	HangmanController();
	void input();
	int spaces;
	HangmanModel hangModel;
};

#endif