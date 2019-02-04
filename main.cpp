#include "iostream"
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstdio>

using namespace std;
string needwhat(string x);
int FindingKeyWords(string x);

int main() {
	int tag;
	string wth; //line getter
	string filename; //filename

	cout << "enter a file name: ";   //get the file address
	cin >> filename;
	cin.get();
	system("CLS");					//clean the page
	
	ifstream inFile(filename.c_str(), ios::in);

	if (!inFile) {
		cout << "file not found\n";
		system("pause");
		exit(1);
	}

	while (true) {									//for chatting with user
		cout << "user : ";
		string jomle;								//save our sentence
		getline(cin, jomle);						//getting sentence
		tag = FindingKeyWords(jomle);
	
		switch (tag) {
			/****************************************************************************/
		case (1):
			//read data
			cout << "\nsupport : \nok , today weather is ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == 'x') {
					break;
				}
			}
			//set weather
			for (int i = 2; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/***********************************************************************/
		case (2):
			//read data
			cout << "\nsupport : \nalright , tomorrow weather is ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == 'q') {
					break;
				}
			}

			//set weather
			for (int i = 2; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/******************************************************************************/


		case (3):
			//read data
			cout << "\nsupport : \nok , here you go,Summary of this week :\n\n";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == 'z') {
					for (int i = 2; i < wth.size(); i++) {
						if (wth[i] == ',')
							cout << "\ntemperature : ";
						else
							cout << wth[i];
					}
					cout << "C\n";
					cout << needwhat(wth) << "\n";
				}
			}
			cout << "\n___________________________________________________________________________\n";
			break;

			/********************************************************************/




			//exit from app

		case (4):
			exit(1);
			break;

			/************************************************************************/



		case (5):
			//read data
			cout << "\nsupport : \nalright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '%') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/***************************************************************/

		case (6):
			//read data
			cout << "\nsupport : alright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '+') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/************************************************************/

		case (7):
			//read data
			cout << "\nsupport : \nalright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '*') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/*****************************************************/

		case (8):
			//read data
			cout << "\nsupport : \nalright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '#') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/*********************************************************/

		case (9):
			//read data
			cout << "\nsupport : \nalright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '-') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/***************************************************************************/

		case (10):
			//read data
			cout << "\nsupport : \nalright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '>') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/*************************************************************************/

		case (11):
			//read data
			cout << "\nsupport : \nalright , ";
			while (!inFile.eof()) {
				inFile >> wth;
				if (wth[0] == '<') {
					break;
				}
			}

			//set weather
			for (int i = 1; i < wth.size(); i++) {
				if (wth[i] == ',')
					cout << "\ntemperature : ";
				else if (wth[i] == ':')
					cout << " is ";
				else
					cout << wth[i];
			}
			cout << "C\n";
			cout << needwhat(wth);
			cout << "\n___________________________________________________________________________\n";
			break;

			/************************************************************/
		case (12):
			cout << "\nSorry but I can't undrestand this question ,its kind of irrelevant , but you can ask about today ,tommorow or weekly weather \n";
			cout << "\n___________________________________________________________________________\n";
			break;

			/**************************************************************************/
		default:
			break;
		}//end of switch case

		inFile.clear();  // clear eofbit
		inFile.seekg(0, ios::beg);

	}//end of while
	
	inFile.close();
	
	system("pause");
	return 0;
}

string needwhat(string x) {
	string total = " ";
	bool mines = false;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] >= 48 && x[i] <= 57)
			total += x[i];
		if (x[i] == 45)
			mines = true;
	}
	int number = 0;
	for (int i = 1; i < total.size();i++) {
		number = (number * 10) + (total[i] - 48);
	}
	if (mines)
		number = -number;
	if (number > 20)
		return "you dont need a jacket go out and enjoy\n";
	if (number < 20 && number >= 10)
		return "its cold outside\n";
	if (number < 10 && number >=0)
		return "you need a jacket\n";
	if (number < 0)
		return "its bone chilling , Be aware :)\n";
}

int FindingKeyWords(string sentence) {
	string definder = "";
	string sure;
	int tag = 12;
	bool flag = true;					// for breaking ring if find the word
	bool ami = false;

	for (int i = 0; i < sentence.size() && flag; i++) {
		
		if (sentence[i] != ' ') {
			definder += sentence[i];

			if (definder == "Today" || definder == "today" && flag) {
				tag = 1;
				flag = false;
			}//end of if "today"

			else if (definder == "tomorrow" || definder == "tomorow" || definder == "tommorow" || definder == "Tomorrow" && flag) {
				tag = 2;
				flag = false;
			}//end of if "tomorrow"

			else if (definder == "weekly" || definder == "week" || definder == "Weekly" && flag) {
				tag = 3;
				flag = false;
			}//end of if "weekly"

			else if (definder == "exit" || definder == "ext" || definder == "Exit" || definder == "bye" && flag) {
				tag = 4;
				flag = false;
			}//end of if "exit"

			else if (definder == "monday" || definder == "Monday" || definder == "MonDay" && flag) {
				tag = 5;
				flag = false;
			}//end of if "monday"

			else if (definder == "Tuesday" || definder == "tuesday" && flag) {
				tag = 6;
				flag = false;
			}//end of if "tuesday"

			else if (definder == "Thursday" || definder == "thursday" && flag) {
				tag = 7;
				flag = false;
			}//end of flag "thursday"

			else if (definder == "Wednesday" || definder == "wednesday" && flag) {
				tag = 8;
				flag = false;
			}//end of flag "wednesday"

			else if (definder == "Friday" || definder == "friday" && flag) {
				tag = 9;
				flag = false;
			}//end of flag "Friday"

			else if (definder == "Saturday" || definder == "saturday" && flag) {
				tag = 10;
				flag = false;
			}//end of flag "Saturday"

			else if (definder == "Sunday" || definder == "sunday" && flag) {
				tag = 11;
				flag = false;
			}//end of flag "Sunday"

			///************************************************************/// starting to undrestand

			else if (definder == "td" || definder == "tody" || definder == "now" && flag) {
				
				cout << "Support : do you mean \"today\" , if its please insert (Y , Yes , y or yes )\n";
				getline(cin, sure);
				if (sure == "Y" || sure == "Yes" || sure == "y" || sure == "yes") {
					ami = true;
				}
				if (ami) {
					tag = 1;
				}
				else {
					tag = 12;
				}
			}// end of auto correcting today

		

			else if (definder == "tomw" || definder == "row" || definder == "next" && flag) {

				cout << "Support : do you mean \"tomorrow\" , if its please insert (Y , Yes , y or yes )\n";
				getline(cin, sure);
				if (sure == "Y" || sure == "Yes" || sure == "y" || sure == "yes") {
					ami = true;
				}
				if (ami) {
					tag = 2;
				}
				else {
					tag = 12;
				}
			}// end of auto correcting tomorrow


			else if (definder == "weak" || definder == "wik" || definder == "wwikly" && flag) {

				cout << "Support : do you mean \"weekly\" , if its please insert (Y , Yes , y or yes )\n";
				getline(cin, sure);
				if (sure == "Y" || sure == "Yes" || sure == "y" || sure == "yes") {
					ami = true;
				}
				if (ami) {
					tag = 3;
				}
				else {
					tag = 12;
				}
			}// end of auto correct weekly 


			else if (definder == "ezit" || definder == "exiit" || definder == "exe" && flag) {

				cout << "Support : do you mean \"exit\" , if its please insert (Y , Yes , y or yes )\n";
				getline(cin, sure);
				if (sure == "Y" || sure == "Yes" || sure == "y" || sure == "yes") {
					ami = true;
				}
				if (ami) {
					tag = 4;
				}
				else {
					tag = 12;
				}
			}

		} //end of if sentence != ' '
		else {
			definder = "";
		
		}//end of else -> if sentence != ' '
	
	}//end of for

	return tag;

}