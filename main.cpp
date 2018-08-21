#include "HangmanModel.h"
#include "HangmanController.h"
#include "HangmanView.h"
#include <ctime>;
#include <cstdlib>
using namespace std;
int main() {
	srand(time(0));
	HangmanController hang;
	hang.input();
	//system("cls");
}