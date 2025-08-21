#pragma once


//전방선언
//포인터 형식으로 멤버 클래스를 가지기 때문에, 
//굳이 #include할 필요가 없음(상속관계면 필요).
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

