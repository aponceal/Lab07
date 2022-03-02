// Lab07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int numstud;

struct student {
	float GPA;
	char* name;
	int studentID;
	char letterGrade;
} ;

int main()
{
	struct student info;

	//Number of students
	cout << "Please insert the number of students you will be entering: ";
	cin >> numstud;

	//Inputting information
	for (int i = 0; i < numstud; i++) {

		cout << "Enter the name of the student: ";
		//cin >> info.name;

		cout << "Enter the student's ID: ";
		cin >> info.studentID;

		cout << "Enter the student's GPA: ";
		cin >> info.GPA;

	}

	//Converting GPA to letter grade
	if (info.GPA == 4) {
		info.letterGrade = 'A';
	}
	else if (info.GPA <= 3.9 && info.GPA >= 3) {
		info.letterGrade = 'B';
	}
	else if (info.GPA <= 2.9 && info.GPA >= 2) {
		info.letterGrade = 'C';
	}
	else if (info.GPA <= 1.9 && info.GPA >= 1) {
		info.letterGrade = 'D';
	}
	else {
		info.letterGrade = 'F';
	}


}
