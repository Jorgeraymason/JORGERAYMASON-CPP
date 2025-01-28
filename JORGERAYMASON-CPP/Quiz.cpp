//#include <iostream>
//#include <string>
//
// //QUIZ that uses a for loop to keep track of points.
// 
//using namespace std;
//
//int main()
//{
//	cout << "Welcome to the quiz\n";
//
//	int points = 0;
//
//	int attempts = 3;
//
//	string input;
//
//	string questions[3] = { "TYPE J: ", "Type E", "Yes or NO? (YES): " };
//
//	string answers[3] = { "J", "E", "YES" };
//
//	for (size_t i = 0; i < 3; i++)
//	{
//		cout << questions[i];
//
//		cin >> input;
//
//		if (input == answers[i])
//		{
//			points++;
//
//			cout << "Correct.\n";
//		}
//		else {
//			cout << "Incorrect. Try again. Attemps left: " + to_string(attempts) << endl;
//
//			i--;
//
//			attempts--;
//
//			if (attempts <= 0)
//			{
//				cout << "Quiz failed!";
//				break;
//			}
//		}
//	}
//
//	if (points == 3)
//	{
//		cout << "\nYou passed the quiz!";
//	}
//
//
//	return 0;
//}