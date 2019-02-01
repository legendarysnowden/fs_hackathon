#include "iostream"
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;
string needwhat(string x);
int main() {
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
	bool ami = false;							//for underestanding


	while (true) {									//for chatting with user
		cout << "user : ";
									
		string flag = "";
		string jomle;								//store our sentence
		string definder = " ";						//declare the sentence
		int tag = 0;								//choising an answer
		getline(cin, jomle);						//getting sentence

		for (int i = 0; i < jomle.size(); i++) {				// analyze the sentence
			
			if (tag == 0) {

				if (jomle[i] != ' ') {
					definder += jomle[i];

					if (definder == " today" || definder == " Today" || definder == " day")
						tag = 1;

					else if (definder == " tomorrow" || definder == " Tomorrow" || definder == " tomorow")
						tag = 2;

					else if (definder == " weekly" || definder == " week" || definder == " wikly" || definder == " wik")
						tag = 3;

					else if (definder == " exit" || definder == " Exit" || definder == " ext")
						tag = 4;

					else if (definder == " monday" || definder == " Monday" || definder == " monDay")
						tag = 6;

					else if (definder == " Tuesday" || definder == " tuesday" || definder == " TueSday")
						tag = 7;

					else if (definder == " Thursday" || definder == " thursday" || definder == " thursDay")
						tag = 8;

					else if (definder == " Wednesday" || definder == " wednesday" || definder == " weDnesday")
						tag = 9;

					else if (definder == " Friday" || definder == " friday" || definder == " FriDay")
						tag = 10;

					else if (definder == " Saturday" || definder == " saturday" || definder == " SaturDay")
						tag = 11;

					else if (definder == " Sunday" || definder == " sunday" || definder == " SunDay")
						tag = 12;
					
					else if (definder == " td" || definder == " tody" || definder == " now") {
						cout << "Support : do you mean \"today\" , if its please isert (Y , Yes , y or yes )\n";
						cin >> flag;
						if (flag == "Y" || flag == "Yes" || flag == "y" || flag == "yes")
							ami = true;
						if (ami)
							tag = 1;
						else
							tag = 5;

					}

					else if (definder == " tomw" || definder == " row" || definder == " next") {
						cout << "Support : do you mean \"tomorrow\" , if its please isert (Y , Yes , y or yes )\n";
						cin >> flag;
						if (flag == "Y" || flag == "Yes" || flag == "y" || flag == "yes")
							ami = true;
						if (ami)
							tag = 2;
						else
							tag = 5;
					}

					else if (definder == " wea" || definder == " ekl" || definder == " wky") {
						cout << "Support : do you mean \"weekly\" , if its please isert (Y , Yes , y or yes)\n";
						cin >> flag;
						if (flag == "Y" || flag == "Yes" || flag == "y" || flag == "yes")
							ami = true;
						if (ami)
							tag = 3;
						else
							tag = 5;
					}

					else if (definder == " ezit" || definder == " exiit" || definder == " exe") {
						cout << "Support : do you mean \"exit\" , if its please isert (Y , Yes , y or yes )\n";
						cin >> flag;
						if (flag == "Y" || flag == "Yes" || flag == "y" || flag == "yes")
							ami = true;
						if (ami)
							tag = 4;
						else
							tag = 5;
					}
				}
				else {
					definder = " ";
				}
			}
		}
		if (tag == 0)
			tag = 5;

		/*
		system("CLS");
		*/
		
		
		
		if(tag > 0)
				switch (tag) {
					/*****************************************************************************/
				case (1):
					//read data
					cout << "\nsupport : ok , today weather is ";
					while (!inFile.eof()) {
						inFile >> wth;
						if (wth[0] == 'x') {
							break;
						}
					}
					//set weather
					for (int i = 2; i < wth.size(); i++ ) {
						if (wth[i] == ',')
							cout << "\ntemperature : ";
						else
							cout << wth[i];
					}
					cout << "C\n";
					cout << needwhat(wth);
					cout << "___________________________________________________________________________\n";
					break;

					/***********************************************************************/

				case (2):
					//read data
					cout << "\nsupport : alright , tomorrow weather is ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/******************************************************************************/


				case (3):
					//read data
					cout << "\nsupport : ok , here you go,Summary of this week :\n";
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
							cout << needwhat(wth);
						}
						cout << "\n";
					}
					cout << "___________________________________________________________________________\n";
					break;

					/********************************************************************/
		
			
				

					//exit from app
		
				case (4):
					exit(1);
					break;

					/************************************************************************/

				case (5):
					cout << "\nSorry but I can't undrestand this question ,its kind of irrelevant , but you can ask about today ,tommorow or weekly weather \n";
					cout << "___________________________________________________________________________\n";
					break;
					 
					/**************************************************************************/


				case (6):
					//read data
					cout << "\nsupport : alright , ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/***************************************************************/

				case (7):
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
					cout << "___________________________________________________________________________\n";
					break;

					/************************************************************/

				case (8):
					//read data
					cout << "\nsupport : alright , ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/*****************************************************/

				case (9):
					//read data
					cout << "\nsupport : alright , ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/*********************************************************/

				case (10):
					//read data
					cout << "\nsupport : alright , ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/***************************************************************************/

				case (11):
					//read data
					cout << "\nsupport : alright , ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/*************************************************************************/

				case (12):
					//read data
					cout << "\nsupport : alright , ";
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
					cout << "___________________________________________________________________________\n";
					break;

					/************************************************************/

				default:
					break;
			}//end of switch case

			bool ami = false;
			inFile.clear();  // clear eofbit
			inFile.seekg(0, ios::beg);
		}//end of while
	
	inFile.close();
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