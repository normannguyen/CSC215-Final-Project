//Norman Nguyen
//Program: Person Class
//Story file
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;
//Constructor: What's created
Person::Person()
{
}
//Talk
void Person::Talk(string storyLine)
{
	cout << "\n\n " << storyLine << endl;
}
//Getter
string Person::GetName()
{
	return Name;
}
//Setter
void Person::SetName(string name)
{
	Name = name;
}
//Destructor: What's deleted

Person::~Person()
{
}
