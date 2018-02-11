#include "stdafx.h"
#include <iostream>

#include "QuickSlot.h"
#include "MySkill.h"

int main()
{
	QuickSlot slots;

	HelloSkill hello;
	ByeSkill bye;

	slots.AddSkill(&hello, 1);
	slots.AddSkill(&bye, 0);

	slots.GetSlot(0)->Function(0);
	slots.GetSlot(1)->Function(0);

	return 0;
}