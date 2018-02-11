#pragma once

#include "Skills.h"

class QuickSlot {
private:
	Skills *pList[10];

public:
	QuickSlot();

	void AddSkill(Skills *pSkill, int nSlot);
	void DeleteSkill(int nSlot);

	Skills *GetSlot(int nSlot);
};