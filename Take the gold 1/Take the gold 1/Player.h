#ifndef __Player__
#define __Player__

#include "Room.h"

class Player{
public:
	Room* current_room = nullptr;
public:
	Player();
	~Player();
public:
	unsigned int playerhp = 100;
	unsigned int playerattack = 0;
	unsigned int playerdefense = 0;
public:
	int check_firstcommand(Vector <String>)const;
	int check_secondcommand(Vector <String>)const;
	int check_thirdcommand(Vector <String>)const;
	int check_fourthcommand(Vector <String>)const;
	void dropeditemslook()const;
	void executecommand1word(const int, int&)const;
	void executecommand2words(const int, const int, int&)const;
	void executecommand4words(const int, const int, const int, const int, int&)const;
};

enum rooms{ 
	TOWER1, TOWER2, TOWER3, TOWER4, 
	NORTHCORRIDOR, EASTCORRIDOR, SOUTHCORRIDOR, WESTCORRIDOR, 
	THRONEROOM
};
enum commandset { 
	LOOK, GO, OPEN, CLOSE, QUIT, HELP,
	NORTH, EAST, SOUTH, WEST,
	PICK, DROP, INVENTORY, EQUIPPED, EQUIP, UNEQUIP, PUT, GET, INTO, FROM, STATS, BACKPACKED,
	KATANA, GASMASK, TREASURE, GRENADE, SWORD, SHIELD, EXPLOSIVE, KEY, BACKPACK,
	CUPBOARD,
	USE,
	CLEAR,
	ERROR
};
#endif //__Player__