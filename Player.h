#pragma once
#include "Creature.h"

enum PlayerType
{
	PT_KNIGHT = 1,
	PT_ARCHER = 2,
	PT_MAGE = 3,
};

class Player : public Creature
{
public:
	Player(int playerType) :_playerType(playerType), Creature(CT_PLAYER)
	{

	}
	virtual ~Player()
	{

	}
	virtual void PrintInfo();
protected:
	int _playerType;
};

class Knight : public Player
{
public:
	Knight() : Player(PT_KNIGHT)
	{
		_hp = 150;
		_atk = 10;
		_def = 5;
	}
};

class Archer : public Player
{
public:
	Archer() : Player(PT_ARCHER)
	{
		_hp = 800;
		_atk = 15;
		_def = 3;
	}
};

class Mage : public Player
{
public:
	Mage() : Player(PT_MAGE)
	{
		_hp = 50;
		_atk = 25;
		_def = 0;
	}
};

