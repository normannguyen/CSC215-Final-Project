//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES and Class
//Story file

#include <iostream>
#include <string>
#include "Story.h"
#include "Person.h"
#include "NPC.h"
//Standard Library
using namespace std;
//Boolean
bool playAgain = false;
//Welcome Message
void WelcomeUser()
{
	cout << "Welcome to the newest version of The (Unaccurate) Storytelling!\n\n";
	cout << "Much like the first game, you will be entering text from your choosing and it will print out the story." << endl;
	cout << "Keep in mind, this doesn't affect story, this is on imagination.\n" << endl;
}
//Get Text from the user input
string GetUserText(string type)
{
	//String for Text/Word
	string userText;
	//Output String
	cout << type;
	//Get user input
	cin >> userText;
	//Return
	return userText;
}
//Get Number from the user input
int GetUserNumber(string type)
{
	//Integer
	int usersNumber;
	//Output String
	cout << type;
	//Get user input
	cin >> usersNumber;
	//Return
	return usersNumber;
}
//Get Name from the user input
string GetUserName(string type)
{
	string userName;
	//Output String
	cout << type;
	//Get user input
	cin >> userName;
	//Return
	return userName;
}

//Line Format
void LineFormat()
{
	cout << "\n";
	cout << "________________________________________________\n\n";
	cout << "________________________________________________\n\n";
	cout << "\n";
}
void normalWords(string swapWords1, string swapWords2);
void swappedWords(string& swapWords1, string& swapWords2);
void StoryTime()
{
	//Do While Loop
	do
	{
		//Person Class
		Person Narrator;
		//Child Class from the NPC class
		NPC Enemy;
		Narrator.SetName("Narrator");
		cout << Narrator.GetName() << ": ";
		Narrator.Talk("Hey, I'm the narrator of the story, keep in mind that you're going to type the words. Think of it as Mad Libs. Have fun playing!");
		string Name = GetUserName("\n\Enter your Name: ");
		//String Pointers
		string *thisName = &Name;
		//Type Number
		int Number = GetUserNumber("\n\Enter your Number: ");
		int *thisNumber = &Number;
		//Type Text/WordChoice
		string Word = GetUserText("\n\Enter your Text/Word Choice like pick an action (run/walk): ");
		//Type Second Text/WordChoice
		string Word2 = GetUserText("\n\Enter your Text/Word Choice (walking/jogging): ");
		LineFormat();
		/*
		 * FIRST
		 */
		cout << Narrator.GetName() << ": ";
		cout << "Hello, my name is " + Name + ". My story today is unusual to tell" << ".";
		cout << "\n\nOnce upon a time, I was " + Word2 + " around the woods minding my business.";
		cout << "\nAll the sudden a unknown creature has caught my attention where I decided to see it for myself.";
		cout << "\nBut then, it turns out to be a group of wild animals consist of " << Number << " of them.";
		cout << "\nUnfortunately, they're unfriendly as this forces myself to " + Word + "away from the them as they're chasing me.";
		cout << "\nLuckily, I made it out alive until I bumped into a cabin.";
		LineFormat();
		//Just have fun, think of it as Mad Libs.
		string Word3 = GetUserText("\nEnter your next Text/Word Choice (yell/chase) [Same, but different ways it goes which it's unaccurate]: ");
		string Word4 = GetUserText("Enter another word to describe this person (Ex: Whale/Lunatic): ");
		string Word5 = GetUserText("Enter the final word to describe this person (EX: Man/Farmer): ");
		/*
		 * SECOND
		 */
		//Normal Words
		normalWords(Word4, Word5);
		cout << Narrator.GetName() << ": ";
		cout << "\n\nI decided to see what's inside the cabin, it turns out it was a hill billy who invited me in.";
		cout << "\nThe hill billy looked at me like I never seen one before, so he decided to " + Word3 + " at me to get off his property.\n\n";		
		cout << Word4 << " " << Word5 << ": ";
		//The NPC Class talks
		Enemy.Talk();
		system("pause");
		//Word Swapped
		swappedWords(Word4, Word5);
		cout << "\nI ran outside again from getting chased by wild animals to getting chased by a hill billy.";
		cout << "\nAs I was running a sheriff sees me running from that crazed " + Word4 + " " + Word5 +".";
		cout << "\nThe sheriff said, 'Hold it right there!' this is the crook we've been looking for.";
		cout << "\n\nIn the End, I saved from my wildest stories.";
		cout << "\n\nThe End.\n\n";
		/*
		 * Wanna Play Again?
		 */
		string playerChoice;
		//Enter your choice of yes or no.
		cout << "Would you like to play again? Y/N" << endl;
		cout << "Also, your name is stored in this address: "  << &Name << "\nAnd your pointer address: " << &thisName << endl;
		cout << "And your number: " << &Number << "\Along with your pointer address: " << &thisNumber << endl;
		//Enter your choice
		cout << "Choice: ";
		cin >> playerChoice;
		//If Statement which means Yes
		if (playerChoice == "y" || playerChoice == "Y")
		{
			playAgain = true;
		}
		//Else If with NO
		else if (playerChoice == "n" || playerChoice == "N")
		{
			//Allow simulation to finish
			cout << "\nSimulation Ended, proceed to exit." << endl;
			system("pause");
		}
		//Else if you left it blank
		else
		{
			cout << "Please input Y or N..." << endl;
			playAgain = false;
		}
	} while (playAgain == true);
}
//Normal Words Reference
void normalWords(string xWord, string yWords)
{
	string Words = xWord;
	xWord = yWords;
	yWords = Words;
}
//Swapped Words Function
void swappedWords(string& xWord, string& yWords)
{
	string Words = xWord;
	xWord = yWords;
	yWords = Words;
}