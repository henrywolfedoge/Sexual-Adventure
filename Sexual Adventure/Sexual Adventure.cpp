//Author:Leighton Scheer  Story:Laura Holmes  Testing:Chiss Bennett TBD

#include "stdafx.h" //see file for other headers
using namespace std;
string version = "Version 0.1.6.a";
string responce = "";
string static name = "", gender = "", male_female = "", Baby_gender = "";
string static Achievement1 = "???", Achievement2 = "???", Achievement3 = "???", Achievement4 = "???", Achievement5 = "???", Achievement6 = "???", Achievement7 = "???", Achievement8 = "???", Achievement9 = "???", Achievement10 = "???", Achievement11 = "???", Achievement12 = "???", Achievement13 = "???";
int static age = 0, Baby_genderCalc;
bool invalidresponce = 0, pregnant = false, keep = false;
void responce_() {
	cin >> responce;
	transform(responce.begin(), responce.end(), responce.begin(), tolower);
}
void save() {
	ofstream dataFile;  // Declare variable. 
	dataFile.open("SaveData.txt");  // Open a text file. 
	dataFile << Achievement1 << endl << Achievement2 << endl << Achievement3 << endl << Achievement4 << endl << Achievement5 << endl << Achievement6 << endl << Achievement7 << endl << Achievement8 << endl << Achievement9 << endl << Achievement10 << endl << Achievement11 << endl << Achievement12 << endl << Achievement13 << endl;  //save
	dataFile.close(); // Close file.
}
void load() {
	ifstream dataFile;  // Declare input file stream.	
	dataFile.open("SaveData.txt"); // Open the file. 
	getline(dataFile, Achievement1);
	getline(dataFile, Achievement2);
	getline(dataFile, Achievement3);
	getline(dataFile, Achievement4);
	getline(dataFile, Achievement5);
	dataFile.close();  // Close file stream.
}
void pregnacy() {
	srand(time(0));
	Baby_genderCalc = 1 + (rand() % 100);
	if (pregnant == true && keep == true) {
		if (Baby_genderCalc <= 50) {
			Achievement12 = "It's a BOY!!";
			Baby_gender = "boy";
		}
		else if (Baby_genderCalc > 50) {
			Achievement13 = "It's a GIRL!!";
			Baby_gender = "girl";
		}
	}
}
void femalestory() {
	pregnacy();//works out gender of baby if becoming pregnant and keeping it.

	if (gender == "female"&&age<18) {//Female<18 story
		system("cls");
		cout << "He stands up and starts walking towards you." << endl
			<< "The 20% of you is shitting themselves, but you walk towards him." << endl
			<< "\"Hey " << name << " is that you ? \" he calls from the distance his voice is deep." << endl
			<< "\"Yeah\" you respond quiet hesitantly." << endl
			<< "\"It's me Ben, you DTF ? \"" << endl
			<< "Although you're a little taken by surprise, you continue to walk towards him and ignore his straight forwardness." << endl
			<< "\"Yeah definitely\" you're finally standing right in front of him." << endl
			<< "\"Cool\" he grins as his arms wrap around your back just above your butt." << endl
			<< "He kisses you." << endl
			<< "It's awesome to say the least." << endl
			<< "It almost doesn't feel real." << endl
			<< "He explains how his parents are out of town and he want to take you back to his." << endl;
		
		cout << endl << "Do you take up his offer?" << endl << "Yes/No" << endl;
		do {
			femaleunder18choice2:
			responce_();
			if (responce == "no" || responce == "yes") {
				invalidresponce = 1;
			}
			else {
				cerr << "Error, Please enter a valid responce" << endl;
				goto femaleunder18choice2;
			}
		} while (invalidresponce = 0);
		if (responce == "no") {
			system("cls");
			cout << "\"OK\" he says a little disappointed \"that�s fine I can understand how you could see that as dangerous." << endl
				<< "Message me when you�re ready for me\"." << endl
				<< " He kisses you on the cheek." << endl
				<< "You go home." << endl << "Pussy." << endl << "Wasting every ones time." << endl
				<< "\"Im such a Fuck head\"." << endl;
				//END OF STORY
		}
		else if (responce == "yes") {
			system("cls");
			cout << "You follow him to his place it doesnt look to shabby." << endl
				<< "You make your way to his room andyou both immediately begin undressing." << endl
				<< "He throws your naked body on his bed and leaps onto you then asks \"Are you on the pill?\"" << endl
				<< "You're not but you want to keep the train rolling and not ruin the mood." << endl;
			
			cout <<endl << "Do you tell him you're on the pill even though you're not?" << endl << "Yes/No" << endl;
			do {
				femaleunder18choice3:
				responce_();
				if (responce == "yes" || responce == "no") {
					invalidresponce = 1;
				}
				else
				{
					cerr << "Error, Please enter a valid responce" << endl;
					goto femaleunder18choice3;
				}
			} while (invalidresponce = 0);
			if (responce == "no") {
				system("cls");
				cout << "\"That's all right,\" he says reaching into the top draw of his bedside table and pulling out a condom." << endl
					<< "\"good thing I have a few handy\"" << endl
					<< "He doesn't say anything while he puts it on." << endl
					<< "As soon as he's done he spreads your legs and thrusts his meaty schlong into you." << endl
					<< "A few munites past and he finishes into you." << endl
					<< "Lucky you told the truth!" << endl
					<< "Long story short: You cuddle, You leave, You get home and go to bed." << endl
					<< "He messages you a few times over the next few weeks." << endl
					<< "I guess he thinks you're his booty-call now but you still sleep with him when you're feeling unnatractive." << endl
					<< "Over time you both lose contact and in a sense, you're ok with what it was because it was good while it lasted." << endl;
				//END OF STORY
			}
			else if (responce == "yes")
			{
				system("cls");
				cout << "He doesn't say anything but instead spreads your legs and thrusts his meaty schlong into you." << endl
					<< "A few munites past and he finishes into you." << endl
					<< "FUCK!" << endl
					<< "What a wise idea that was on your part." << endl
					<< "Long story short: You cuddle, You leave, You sneak back to bed." << endl
					<< "The next morning while getting ready for class you decide that on your way home you'll stop by the store and buy a morning after pill." << endl
					<< "It's a long shot seeing as thier more effective the sooner you take them, but this is your only option at the moment." << endl
					<< "You pray this works otherwise you're in BIG TROUBLE!!!" << endl;
			}
		}
		/* dont cross
		_______________________________________________________________________*/
	}

	else if (gender == "female" && age > 18) {//Female >18 story
		cout << "old female story needs to be written" << endl;
	}
}
void malestory() {
	system("cls");
	cout << "Story sill in development" << endl;
}
void storychoice() {
	
	if (age < 18) {
		//generic start <18
		if (gender == "male") {
			male_female = "chick";
		}
		else if (gender == "female") {
			male_female = "guy";
		}
		cout << "You're at home in bed, about to go to log off facebook when your phone vibrates on the deck next to you." << endl
			<< "You pick it up and you have a message from someone on tinder." << endl
			<< "You unlock your phone and it's that hot "<<male_female<<" that matched with you for reasons unknown."<<endl
			<< "They're super hot and obviously super horny at the moment and you've been chosen!"<<endl
			<< "The message says they want to meet up" << endl
			<< "Now!"<<endl
			<< "Its 11:45pm, your parents have been asleep for a while now, and you're sure that you can get out of your window with no worriers."<<endl
			<< "But, you've got to get up early tomorrow to get to class on time." << endl;
		
		cout << endl << "Should you sneak out and fuck this hottie?" << endl << "Yes/No" << endl;
		do {
		redochoice1:
			responce_();
			if (responce == "yes" || responce == "no") {
				invalidresponce = 1;
			}
			else {
				cerr << "Error, Please enter a valid responce" << endl;
				goto redochoice1;
			}
		} while (invalidresponce = 0);
		if (responce == "no")
		{
			cout << "You lock your phone and crawl into bed hoping that tomorrow's class is worth it." << endl
				<< "You think you may have passed up the best fucking of your life!" << endl;
			//END OF STORY
			Achievement1 = "You gave up before the start";
		}
		else if (responce == "yes") {
			cout << "You respond that your keen and they send you the address to meet at." << endl
				<< "You're now dressed and out on the quiet street, following the directions." << endl
				<< "When you reach the destination it's a shady looking park then you see a figure on a bench and you�re 80 % sure it�s them." << endl;
			if (gender == "female") {
				femalestory();
			}
			else if (gender == "male") {
				malestory();
			}
		}
	}
	else if (age >= 18) {
		//generic start >18
		cout << "old story is even more in development" << endl;
	}
}
void Start() {
	madewrongchoice:
	system("cls");
	//enter name
	cout << "Please enter your characters name" << endl;
	cin >> name;
	name[0] = toupper(name[0]);
	//enter gender
	cout << "Please enter your characters gender" << endl << "male/female" << endl;
	do {
	invalidgender:
		responce_();
		if (responce == "male" || responce == "m" || responce == "female" || responce == "f") {
			invalidresponce = 1;
		}
		else {
			cerr << "Error, Please enter a valid responce" << endl;
			goto invalidgender;
		}
	} while (invalidresponce = 0);
	if (responce == "male" || responce == "m") {
		gender = "male";
	}
	else if (responce == "female" || responce == "f") {
		gender = "female";
	}
	//enter age
invalidage:
	cout << "Please enter your characters age" << endl;
	cin >> age;
	while (!(cin >> age)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cerr << "That's a invalid age, please try again" << endl;
	}
		if (age < 13 || age >= 50) {
			cerr << "That's a invalid age, please try again" << endl;
			goto invalidage;
		}
	
	//confim
		cout << "Your charactar is a " << age << " year old " << gender << " named " << name << endl;
	do {
		invalidconfirm:
		cout << "Is the correct?" << endl << "Yes/No" << endl;
		responce_();
		if (responce == "yes" || responce == "Yes" || responce == "No" || responce == "no") {
			invalidresponce = 1;
		}
		else {
			cerr << "Error, Please enter a valid responce" << endl;
			goto invalidconfirm;
		}
	} while (invalidresponce = 0);
	if (responce == "yes" || responce == "Yes") {
		system("cls");
		storychoice();
	}
	else if (responce == "no" || responce == "No") {
		goto madewrongchoice;
	}
}
void main_menu() {
startscreen:
	system("cls");
	cout << "SEXUAL ADVENTURE" << " " << version << endl << "TYPE START" << endl;
	do {
		redostart:
		responce_();
		if (responce == "start") {
			invalidresponce = 1;
		}
		else {
			cerr << "Error, Please enter a valid responce" << endl;
			goto redostart;
		}
	} while (invalidresponce = 0);
	if (responce == "start") {
	}
menu:
	system("cls");
	cout << "SEXUAL ADVENTURE" << " " << version << endl;
	cout << "Play" << endl << "Credits" << endl << "Achievements" << endl << "Save" << endl << "Load" << endl << "Help" << endl << "Exit" << endl;
redoinput:
	do {
		responce_();
		if (responce == "play" || responce == "credits" || responce == "achievements" || responce == "save" || responce == "load" || responce == "help" || responce == "exit") {
			invalidresponce = 1;
		}
		else {
			cerr << "Error, Please enter a valid responce" << endl;
			goto redoinput;
		}
	} while (invalidresponce = 0);
	if (responce == "play") {
		Start();
	}
	else if (responce == "help") {
		system("cls");
		cout << "Help" << endl << endl << "To avoid going into a infinite loop enter ONLY a NUMBER when asked age" << endl
			<< "I don't care about P.C. only MALE AND FEMALE are avalible" << endl
			<< "Achievements are recived when certain choices have been made...Both the Good and the Bad" << endl;
		goto back;
	}
	else if (responce == "achievements") {
		system("cls");
		cout << "List of acheivements:" << endl << Achievement1 << endl << Achievement2 << endl << Achievement3 << endl << Achievement4 << endl << Achievement5 << endl << Achievement6 << endl << Achievement7 << endl << Achievement8 << endl << Achievement9 << endl << Achievement10 << endl;
		goto back;
	}
	else if (responce == "save") {
		system("cls");
		cout << "Are you sure you want to save?" << endl << "Yes/No" << endl;
		do {
			responce_();
			if (responce == "yes" || responce == "no") {
				invalidresponce = 1;
			}
			else {
				cerr << "Error, Please enter a valid responce" << endl;
				goto redoinput;
			}
		} while (invalidresponce = 0);
		if (responce == "yes") {
			save();
			cout << "Data has been saved" << endl;
			goto back;
		}
		else if (responce == "no") {
			goto back;
		}
	}
	else if (responce == "load") {
		system("cls");
		load();
		cout << "Data has been loaded";
		goto back;
	}
	else if (responce == "credits") {
		system("cls");
		cout << endl << "Coding: Leighton Scheer" << endl << "Story: Laura Holmes" << endl << "Testing: Chiss Bennett" << endl;
		goto back;
	}
	else if (responce == "exit") {
		cout << "Do you close game or go back to start screen?" << endl << "Exit/Start" << endl;
		do {
			redoexit:
			responce_();
			if (responce == "exit" || responce == "start") {
				invalidresponce = 1;
			}
			else {
				cerr << "Error, Please enter a valid responce" << endl;
				goto redoexit;
			}
		} while (invalidresponce = 0);
		if (responce == "start") {
			goto startscreen;
		}
		else if (responce == "exit") {
			system("cls");
			cout << "Please wait while the program closes" << endl;
			exit(0);
		}
	}
	cout << "END OF STORY";
	//return to main menu
	do {
	back:
	invalidback:
		cout << endl << "Type \"back\" to go to the main menu" << endl;
		responce_();
		if (responce == "back") {
			invalidresponce = 1;
		}
		else {
			cerr << "Error, Please enter a valid responce" << endl;
			goto invalidback;
		}
	} while (invalidresponce = 0);
	if (responce == "back") {
		system("cls");
		goto menu;
	}
}
int main() {
	main_menu();
	return 0;
}
