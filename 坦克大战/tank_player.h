#pragma once
#include"tank.h"

class tank_player :public tank
{
public:
	tank_player();
	~tank_player();
	void init_tank_player(myQueue& bornQueue, map& map, direction direct = Up);
	void init_tank_player(myQueue& bornQueue, map& map,  direction direct,bool isfalse);
	void init_xy();

	void update(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue,queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void update(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, queue<tanke_enemy*>& enemyQueue, queue<tanke_enemy*>& deadenemyQueue, queue<prop*>& propertyQueue, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int& playerlife, int& enemynum, int& score);
	void update(map & map, int(*tankmap)[26], int(*bulletmap)[26], tank_player& player_tank1, tank_player& player_tank2, myQueue & bombQueue, myQueue & bornQueue, gameState & state, int playerlife[]);
	void render(Picture& picture);

	void update_xy();
	void update_sheld();
	void update_speed();

	void rend_bar(int x, int y, int w, int h, int n = 4, color_t color = WHITE);
public:
	bool player1;
	int level;
};

