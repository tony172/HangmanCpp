#include "HangmanView.h"
using namespace std;
HangmanView::HangmanView(){
	
}

void HangmanView::output(string current,string missed,int state) {
	system("cls");
	cout << current << endl;
	cout << "Pogresno: " << missed  << endl;
	cout << "Pokusaji: " << 6 - state << endl;
}
void HangmanView::drawHangman(int state) {
	switch (state) {
	case 0: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /          " << endl;
		cout << "    |/         " << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;
	}
	case 1: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /           O" << endl;
		cout << "    |/         " << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;
	}
	case 2: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /           O" << endl;
		cout << "    |/            |" << endl;
		cout << "    |             |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;
	}
	case 3: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /           O" << endl;
		cout << "    |/           /|" << endl;
		cout << "    |             |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;
	}
	case 4: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /           O" << endl;
		cout << "    |/           /|\\" << endl;
		cout << "    |             |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;

	}
	case 5: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /           O" << endl;
		cout << "    |/           /|\\" << endl;
		cout << "    |             |" << endl;
		cout << "    |            /" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;
	}
	case 6: {
		cout << "     _ _ _ _ _ _ _" << endl;
		cout << "    |  /          |" << endl;
		cout << "    | /           O" << endl;
		cout << "    |/           /|\\" << endl;
		cout << "    |             |" << endl;
		cout << "    |            / \\" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "    |" << endl;
		cout << "____|____" << endl;
		break;
	}
	}

}
