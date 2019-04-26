#pragma once
#include <iostream>
#include <string>

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

