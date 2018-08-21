#ifndef HANGMANVIEW_H
#define HANGMANVIEW_H
#include <iostream>
#include "HangmanController.h"
#include "HangmanModel.h"
#include <string>
#include <cstdlib>
class HangmanView {
public:
	HangmanView();
	void output(string,string,int);
	void drawHangman(int);
};

#endif