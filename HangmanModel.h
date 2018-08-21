#ifndef HANGMANMODEL_H
#define HANGMANMODEL_H
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
class HangmanModel {
public:
	HangmanModel();
	void readFile();
	void randomMovie();
	vector<string> movies;
	string selectedMovie;
	string missed;
	string current;
	int hangmanState;



};

#endif