/*
  credit to @Kalutu
  C++
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
  string description;
  bool completion;
}

void displayMenu();
void addTask();
void markTaskComplete();
void displayList();

vector<Task> toDoList;

void displayMenu() {
  cout << "________ To - Do List ________" << endl;
  cout << "1. Display List" << endl;
  cout << "2. Add Task" << endl;
  cout << "3. Mark Task as Complete" << endl;
  cout << "4. Quit" << endl;
  cout << "______________________________" << endl;
  cout << "Enter your choice: ";
}


