//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <string>
//
//
////TYCOON GAME
//
//using namespace std;
//
//string input;
//
//int money = 0;
//
//bool bonus;
//
////Function Declarations
//
//bool cleanFloor();
//
//void store();
//
//int main() {
//	bool loop = true;
//
//	while (loop != false) {
//		int input;
//
//		cout << "**Tycoon Game**\nBalance: " + to_string(money);
//
//		cout << "\n**Jobs/Tasks**\n1: Clean Floor ($1)\n2: Visit Store\nEnter Input: ";
//
//		cin >> input;
//
//		switch (input)
//		{
//		case 1:
//			cleanFloor();
//		default:
//			break;
//		}
//
//		//Addtional bonus
//		if (bonus == true)
//		{
//			money *= 2;
//		}
//	}
//}
//
//bool cleanFloor() {
//	cout << "Push F to do clean floor: ";
//
//	cin >> input;
//
//	if (input == "f" || input == "F")
//	{
//		cout << "Task complete!";
//
//		money += 1;
//	}
//	else
//	{
//		cout << "Task incomplete.";
//
//		return false;
//
//	}
//
//	return true;
//}
//
//void store() {
//	string items[2] = { "Broom", "Cleaning Spray" };
//
//	for (size_t i = 0; i < 2; i++)
//	{
//		cout << items[i] << "\n";
//	}
//
//	cout << "Select an item from the store: ";
//
//	cin >> input;
//
//}