#pragma once


//���漱��
//������ �������� ��� Ŭ������ ������ ������, 
//���� #include�� �ʿ䰡 ����(��Ӱ���� �ʿ�).
class Player;
class Field;

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();

	void CreatePlayer();

private:
	Player* _player;
	Field* _field;
};

