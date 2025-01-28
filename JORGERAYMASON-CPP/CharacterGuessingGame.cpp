#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

void printCharacter() {
    string contents;

    ifstream file("Text-Files/ascii-boba-fett.txt");

    while (getline(file, contents)) {
        cout << contents << endl;
    }

    file.close();
}

int main() {

	printCharacter();

	int input;

	int guesses = 2;

	cout << "Guess the character drawn in ASCII: \n";

	string options[3] = { "1. Yes Man", "2. Boba Fett", "3. Someone" };

	while (guesses >= 0)
	{
		for (string choice : options)
		{
			cout << choice << endl;
		}

		cin >> input;

		if (input == 2)
		{
			cout << "YOU WIN!";

			break;
		}
	}

	return 0;
}