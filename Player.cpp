#include "Player.h"
#include <iostream>
using namespace std;

void Player::PrintInfo()
{
	cout << "---------------------------" << endl;
	cout << "[�÷��̾� ����]" << "HP: " << _hp << " ATK:" << _atk << " DEF:" << _def << endl;
	cout << "---------------------------" << endl;
}