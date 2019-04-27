#pragma once
#include <iostream>
#include <string>
//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES and Classes
//Header File for Person
using namespace std;

class Person
{
public:
	//Constructor: What's created
	Person();
	void Talk(string storyLine);
	//String GetName
	string GetName();
	//SetName
	void SetName(string name);
	//Destructor: What's deleted
	~Person();
private:
	string Name;
};

