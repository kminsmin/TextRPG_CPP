#include "Monster.h"
#include <iostream>
using namespace std;

void Monster::PrintInfo()
{
	cout << "---------------------------" << endl;
	cout << "[���� ����]" << "HP: " << _hp << " ATK:" << _atk << " DEF:" << _def << endl;
	cout << "---------------------------" << endl;
}
