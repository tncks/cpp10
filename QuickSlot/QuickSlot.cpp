#include "stdafx.h"
#include <iostream>
#include "QuickSlot.h"

using namespace std;

QuickSlot::QuickSlot()
{
	for (int n = 0; n < 10; n++) pList[n] = 0;
}

void QuickSlot::AddSkill(Skills *pSkill, int nSlot)
{
	if (nSlot >= 0 && nSlot < 10)
	{
		pList[nSlot] = pSkill;
	}

	return;
}

void QuickSlot::DeleteSkill(int nSlot)
{
	if (nSlot >= 0 && nSlot < 10)
	{
		pList[nSlot] = 0;
	}

	return;
}

Skills *QuickSlot::GetSlot(int nSlot)
{
	if (nSlot >= 0 && nSlot < 10)
	{
		return pList[nSlot];
	}

	return 0;
}