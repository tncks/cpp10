#include "stdafx.h"
#include <iostream>

#include "MySkill.h"

void HelloSkill::Function(int nFunc)
{
	std::cout << "Hello!" << std::endl;

	return;
}

void ByeSkill::Function(int nFunc)
{
	std::cout << "Bye!" << std::endl;

	return;
}