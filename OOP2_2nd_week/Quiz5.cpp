#include <iostream>
#include "StudentNode.h"
using namespace std;

int main() {
	const char* name[3] = { "kim","lee", "park"};
	StudentNode studentA(name[0], 1111);
	int case_ = 0;
	StudentNode* temp;

	cout << "Select case 1(A->B->C) or 2(C->B->A) (input 1 or 2)" << endl;
	cin >> case_;
	if (case_ == 1)
	{
		//setting next node example (1) A->B->C
		StudentNode studentB(name[1], 2222);
		StudentNode studentC(name[2], 3333);
		studentA.setNext(&studentB);
		studentB.setNext(&studentC);

		//Print the all the student info using only ¡°first¡± student
		cout << studentA.getName() << endl;
		cout << studentA.getNext()->getName() << endl;
		cout << studentA.getNext()->getNext()->getName() << endl;

		temp = &studentA;
	}
	else if (case_ == 2)
	{
		//setting next node example (2) C->B->A
		StudentNode studentB(name[1], 2222, &studentA);
		StudentNode studentC(name[2], 3333, &studentB);

		cout << studentC.getName() << endl;
		cout << studentC.getNext()->getName() << endl;
		cout << studentC.getNext()->getNext()->getName() << endl;

		temp = &studentC;
	}
	else {
		cout << "Please input only 1 or 2";
		return 0;
	}
	
	while (true) {
		cout << temp->getName() << endl;
		if (temp->getNext() == NULL) break;
		else temp = temp->getNext();
	}

}