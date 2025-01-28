//#include <iostream>
//#include <string>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//bool isLetterInWord(char guess, const string word[], int size) {
//    for (int i = 0; i < size; i++) {
//        if (word[i][0] == guess) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    string word[4] = { "L", "U", "K", "O" };
//    int letters = 4; // Number of letters in the word
//
//    bool loop = true;
//    char guess;
//
//    cout << "Word Guessing Game. Guess the word.\n";
//
//    while (loop) {
//        cout << "Letters: " << letters << "\nGuess a letter: ";
//        cin >> guess;
//
//        if (isLetterInWord(guess, word, letters)) {
//            cout << "Correct!\n";
//        }
//        else {
//            cout << "Incorrect!\n";
//        }
//
//        // Check if all letters have been guessed correctly
//        bool allLettersGuessed = true;
//        for (int i = 0; i < letters; i++) {
//            if (word[i][0] != guess) {
//                allLettersGuessed = false;
//                break;
//            }
//        }
//
//        if (allLettersGuessed) {
//            cout << "Congratulations! You guessed the word.\n";
//            loop = false;
//        }
//    }
//
//    return 0;
//}