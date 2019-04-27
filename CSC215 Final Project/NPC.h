//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES and Classes
//Header File for NPC
#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;
class NPC : public Person
{
public:
	//Constructor: What's created
	NPC();
	void Talk();
	//Destructor: What's deleted
	~NPC();
};

