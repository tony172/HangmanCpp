#include "HangmanController.h"
//HangmanModel hangModel;
HangmanView hangView;
HangmanController::HangmanController() {
	hangModel.readFile();
	hangModel.randomMovie();
	HangmanController::spaces = 0;
}

char in;
int i = 0, m = 0, h = 0,br=0;
void HangmanController::input() {
	//cout << hangModel.current << endl;
	for (int i = 0; i < hangModel.selectedMovie.size(); i++) {
		if (hangModel.selectedMovie[i] == ' ') {
			HangmanController::spaces++;
		}
	}
	while (hangModel.hangmanState != 7) {
		hangView.output(hangModel.current, hangModel.missed, hangModel.hangmanState);
		hangView.drawHangman(hangModel.hangmanState);
		if (hangModel.hangmanState == 6) {
			break;
		}
		cin >> in;
		while (i != hangModel.selectedMovie.size()) {
			if ((tolower(in) == tolower(hangModel.selectedMovie[i])) && hangModel.current[i] != in) {

				hangModel.current[i] = in;
				h++;
			}
			else {
				if (hangModel.selectedMovie[i] != ' ' && hangModel.current[i] != in) {
					for (int j = 0; j < hangModel.missed.size(); j++){
						if (hangModel.missed[j] == in) {
							br++;
						}
					}
					if (br == 0) {
						m++;
					}
				}
			}
			

			i++;
			br = 0;
		}
		if (m == hangModel.selectedMovie.size()-HangmanController::spaces) {
			hangModel.missed.push_back(in);
			hangModel.missed.push_back(',');
			hangModel.hangmanState++;
		}
		
		m = 0;
		//cout  << m << " " << hangModel.selectedMovie.size();
		
		i = 0;
		//hangView.output(hangModel.current, hangModel.missed, hangModel.hangmanState);
		/*system("cls");
		cout << hangModel.current << endl <<"Missed: " << hangModel.missed << endl << "Ostalo pokusaja: " << 6-hangModel.hangmanState << endl;*/
		if (h+1 == hangModel.selectedMovie.size()-HangmanController::spaces) {
			//cout << "Pobjeda!" << endl;
			break;
		}

	}
}
