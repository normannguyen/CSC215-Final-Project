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

