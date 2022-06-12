/*Magic 8 Ball
Generates a random response to an inputted question like an 8 ball*/

#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

int main () {
	////////////////////INITIAL VARS + SETUP//////////////////////////

	//seeding the random num generator
	srand(time(0));
	
	//initial variables
  string question;
	int choice = 0;
	int aNum = 0;
	int rNum = 0;
	string menu = "*********************************************\nSelect from options below: \n1) Ask a yes or no question\n2) Ask a number question\n3) Quit\n\n";
	
	//response vector
	vector <string> answers {"Yes","No","Definitely","Maybe","Ask again","No doubt","Absolutely","Not now","It's not clear right now","Probably"};
	
	//reaction vector
	vector <string> reaction {"Whoa! Bet you didn't expect that!","I hope that helped!","Wow! Who knew?!","Dang! That was shocking!","Really?! Shocker!","That's crazy...","You're kidding me, right? That's crazy!","How exciting!","That's kind of insane, not gonna lie...","Who saw that coming?! Not me!"};

	//number vector
	vector <string> number {"At least ", "More than ","Less than ","At most ","No more than ","Definitely ","Exactly ","Close to ," ,"Not ","Almost "};
	
	//greeting
	cout<<"\nWelcome to the Magic 8 Ball Simulator!\n\n";

	//menu options
	cout << menu;
	cout << "Choice: ";
	cin >> choice;

	//loop to keep asking for type of question until user quits
	while (choice != 3)
	{
		//getting question input
		cin.ignore();
		cout<<"What is your question?\n\n";
		getline(cin, question);
		cout<<endl;

		//yes or no questions
		if (choice == 1)
		{
		// rand() % (high - low + 1) + low formula to get range for random nums
		//range goes from 0-9 so that no vector adjustment needed
		aNum = rand() % (9 - 0 + 1) + 0;

		//gets response from vector
		cout<<"The Magic 8 Ball says: "<<answers[aNum]<<endl<<endl;
		}

		if (choice == 2)
		{
			//random number from 0 - 100 for number answer
			aNum = rand () % ( 100 - 0 + 1) + 0;
			//random number from  0 - 9 for index of number vector
			rNum = rand() % (9 - 0 + 1) + 0;

			//8 ball answer statement
			cout<<"The Magic 8 Ball says: "<<number[rNum]<<aNum;
		}

		//random number from 0 - 9 for reaction vector
		rNum = rand() % (9 - 0 + 1) + 0;
		cout<<"\n\n"<<reaction[rNum]<<endl<<endl;
	
		//repeats menu options to avoid endless loop
		cout<<menu;
		cout<<"Choice: ";
		cin>>choice;
	}
	//goodbye when user quits
	cout<<"\n\nThanks for trusting Magic 8 Ball for all your important questions!";
	
return 0;
}
