//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES and Classes
//Header File for Person
#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;
class NPC : public Person
{
public:
	NPC();
	void Talk();
	~NPC();
};

