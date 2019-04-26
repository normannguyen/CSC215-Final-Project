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
	Person();
	void Talk(string storyLine);
	string GetName();
	void SetName(string name);
	~Person();
private:
	string Name;
};

