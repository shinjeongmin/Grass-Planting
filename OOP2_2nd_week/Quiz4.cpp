#include <iostream>
#include "Grade.h"
using namespace std;

int main() {
	Grade studentA(88, 92, 95);
	Grade studentB(76, 96, 80);
	Grade studentC(98, 78, 97);

	cout << "StudentA : " << studentA.getAvg() << endl;
	cout << "StudentB : " << studentB.getAvg() << endl;
	cout << "StudentC : " << studentC.getAvg();
}