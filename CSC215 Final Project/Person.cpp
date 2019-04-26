//Norman Nguyen
//Program: Person Class
//Story file
#include "Person.h"
#include <iostream>
#include <string>
#include "Story.h"

using namespace std;
Person::Person()
{
}

void Person::Talk(string storyLine)
{
	cout << "\n\n " << storyLine << endl;
}
string Person::GetName()
{
	return Name;
}
void Person::SetName(string name)
{
	Name = name;
}
Person::~Person()
{
}
