#include "iostream"
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include "functions.h"
using namespace std;

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

	
		int counter_words;
		counter_words = Words_Counter(jomle);

		string *words;
		int *tag;

		words = new string[counter_words];
		tag = new int[counter_words];

		Tokenizing(jomle, words, counter_words);
		Find_Tags(tag, counter_words, words, counter_words);


		int Sum_Of_Tags = 0;
		for (int i = 0; i < counter_words; i++) {
			Sum_Of_Tags += tag[i];						//if sum all of our tags equals zero , understand that this is irrelevant question.
		}//end of for -> Sum Of Tags

		if (Sum_Of_Tags == 0) {
			cout << "\nSorry but I can't undrestand this question ,its kind of irrelevant , but you can ask about today ,tommorow or weekly weather \n";
			cout << "\n___________________________________________________________________________\n\n";
		}//end of if -> Sum Of Tags

		else {

			cout << "\nsupport :\n";
			
			for (int tag_counter = 0; tag_counter < counter_words; tag_counter++) {

				switch (tag[tag_counter]) {
					/****************************************************************************/
				case (1):
					//read data
					cout << "\ntoday weather is ";
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
					break;

					/***********************************************************************/
				case (2):
					//read data
					cout << "\ntomorrow weather is ";
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
					break;

					/******************************************************************************/


				case (3):
					//read data
					cout << "\nhere you go,Summary of this week :\n\n";
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
					break;



					/************************************************************************/



				case (4):
					//read data
					cout << "\n";
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
					break;
					/***************************************************************/

				case (5):
					//read data
					cout << "\n";
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
					break;

					/************************************************************/

				case (6):
					//read data
					cout << "\n";
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
					break;

					/*****************************************************/

				case (7):
					//read data
					cout << "\n";
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
					break;

					/*********************************************************/

				case (8):
					//read data
					cout << "\n";
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
					break;

					/***************************************************************************/

				case (9):
					//read data
					cout << "\n";
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
					break;

					/*************************************************************************/

				case (10):
					//read data
					cout << "\n";
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
					break;


					/********************************************************************/

				case (11):					//exit from app
					exit(1);
					break;

					/**************************************************************************/

				default:
					break;

				}//end of switch case
				inFile.clear();  // clear eofbit
				inFile.seekg(0, ios::beg);
			} // end of for , for tag_counter
			cout << "\n___________________________________________________________________________\n\n";
		}//end of else -> Sum Of Tags

	}//end of while
	
	inFile.close();
	
	system("pause");
	return 0;
}