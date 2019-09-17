#include <iostream>
using namespace std;

void checksentence(char * sent, char * typ) {
	if (strcmp(sent, typ))
		cout << "Incorrect Answer!";
	else
	{
		cout << "Correct Answer!";
	}
}

int main() {
	
	char sentence[50] = "Hello World!";
	char typing[50];
	cout << sentence << endl << "type sentence above:";
	cin.getline(typing,strlen(typing));
	checksentence(sentence, typing);
}