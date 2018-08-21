#include "HangmanModel.h"
using namespace std;
	char buffer[100];
	HangmanModel::HangmanModel(){
		HangmanModel::hangmanState = 0;
	}
	void HangmanModel::readFile() {
		FILE* fp;
		fp = fopen("movies.txt", "rt");
		if (!fp) return;
		while (fgets(buffer, 100, fp)) {
			HangmanModel::movies.push_back(buffer);
		}

	}
	void HangmanModel::randomMovie() {
		int i = rand() % HangmanModel::movies.size();
		HangmanModel::selectedMovie = HangmanModel::movies.at(i);
		//cout << HangmanModel::selectedMovie << endl;
		for (i = 0; i < HangmanModel::selectedMovie.size(); i++) {

			if (selectedMovie.at(i) != ' ') {
				HangmanModel::current.push_back('_');
			}
			else {
				HangmanModel::current.push_back(' ');
			}
		}
		HangmanModel::current.pop_back();
		
	}

