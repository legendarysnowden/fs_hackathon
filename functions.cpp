#include "iostream"
using namespace std;

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
	for (int i = 1; i < total.size(); i++) {
		number = (number * 10) + (total[i] - 48);
	}
	if (mines)
		number = -number;
	if (number > 20)
		return "you dont need a jacket go out and enjoy\n";
	if (number < 20 && number >= 10)
		return "its cold outside\n";
	if (number < 10 && number >= 0)
		return "you need a jacket\n";
	if (number < 0)
		return "its bone chilling , Be aware :)\n";
}

void Tokenizing(string sentence, string words[], int size) {
	int counter = 0;				//words array number
	int checker = 0;				//check if two space or more come togheter or not

	for (int i = 0; i < size; i++)      //initializing words
		words[i] = "";

	for (int i = 0; i < sentence.size(); i++) {						//giving words, to words string
		if ((sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122)) {
			words[counter] += sentence[i];
			checker = counter;
		}
		else if (counter - checker == 0) {
			counter++;
		}			//check if two space or more come togheter it just skip them and dont count them

	}
}

int Words_Counter(string sentence) {							//this is similar to Tokenizing functions , but the different is it returns number of words

	int counter = 0;
	int checker = 0;

	for (int i = 0; i < sentence.size(); i++) {						//check it is alphabet
		if ((sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122)) {
			checker = counter;
		}
		else if (counter - checker == 0) {					//check if two space or more come togheter it just skip them and dont count them
			counter++;
		}
	}

	return (counter + 1);
}

void Find_Tags(int tag[], int size1, string words[], int size2) {


	for (int i = 0; i < size2; i++) {

		if (words[i] == "Today" || words[i] == "today") {
			tag[i] = 1;
		}//end of if "today"

		else if (words[i] == "tomorrow" || words[i] == "tomorow" || words[i] == "tommorow" || words[i] == "Tomorrow") {
			tag[i] = 2;

		}//end of if "tomorrow"

		else if (words[i] == "weekly" || words[i] == "week" || words[i] == "Weekly") {
			tag[i] = 3;

		}//end of if "weekly"


		else if (words[i] == "monday" || words[i] == "Monday" || words[i] == "MonDay") {
			tag[i] = 4;

		}//end of if "monday"

		else if (words[i] == "Tuesday" || words[i] == "tuesday") {
			tag[i] = 5;

		}//end of if "tuesday"

		else if (words[i] == "Thursday" || words[i] == "thursday") {
			tag[i] = 6;

		}//end of flag "thursday"

		else if (words[i] == "Wednesday" || words[i] == "wednesday") {
			tag[i] = 7;

		}//end of flag "wednesday"

		else if (words[i] == "Friday" || words[i] == "friday") {
			tag[i] = 8;

		}//end of flag "Friday"

		else if (words[i] == "Saturday" || words[i] == "saturday") {
			tag[i] = 9;

		}//end of flag "Saturday"

		else if (words[i] == "Sunday" || words[i] == "sunday") {
			tag[i] = 10;

		}//end of flag "Sunday"

		else if (words[i] == "exit" || words[i] == "ext" || words[i] == "Exit" || words[i] == "bye") {
			tag[i] = 11;

		}//end of if "exit"

		else
			tag[i] = 0;
	}
}