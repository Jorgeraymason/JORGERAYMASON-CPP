//#include <iostream>
//#include <string>
//#include <deque>
// 
// //Simple User Management system
//
//using namespace std;
//
//string addUser();
//string deleteUser();
//
//deque<string> users = { "John", "Joe", "Jess" };
//
//string input;
//
//int main() {
//    cout << "Database Management System\nList of commands\nA: Add User\nD: Delete User\nE: Exit";
//
//    int loop = 1;
//
//    char input;
//
//    while (loop > 0) {
//        cin >> input;
//
//        switch (input)
//        {
//        case "a" || "A":
//            addUser();
//        case "d" || "D":
//            deleteUser();
//            
//            users.pop_back(deleteUser());
//        default:
//            break;
//        }
//    }
//
//    return 0;
//}
//
//string addUser() {
//    cout << "Currect users: " + users + "\nEnter user to add: ";
//
//    cin >> input;
//
//    return input;
//}
//
//string deleteUser() {
//    cout << "Enter user to delete: ";
//
//    cin >> input;
//
//    return input;
//} 