#pragma once
#include"Music.h"
#include"tank_player.h"
#include"tanke_enemy.h"

class gameScene_PVE
{
public:
	gameScene_PVE();
	gameScene_PVE(int level);
	~gameScene_PVE();

	void update();
	void render();
	bool isOver();
	void onKey(key_msg key);
	

private:
	void update_enemyborn();
	void update_tankmap();
	void update_bulltemap();
	void update_state();
	void update_proptime();

	void onKey_J(key_msg key);
	void onKey_WASD(key_msg key);
	void onKey_P(key_msg key);
	void onKey_ESC(key_msg key);

	void rendMainface();
	void rendInformation();
	void rend_bar(int x, int y, int w, int h, int n = 4, color_t color = WHITE);
	void rend_bomb();
	void rend_born();
	void rend_prop();
	void rend_lose();
	void rend_pass();
	void rend_pause();
	void rend_through();

	void isLose();
	void isPass();

	void init();
	void initgame();
	void inittankmap();
	void initbulltemap();

	void delete_enemy();
	void delete_property();

	void getProp(tank_player& tank_player);
	void prop_tank(tank_player& tank_player);
	void prop_star(tank_player& tank_player);
	void prop_bomb(tank_player& tank_player);
	void prop_sheld(tank_player& tank_player);
	void prop_timer(tank_player& tank_player);

	bool canmove(int aimx, int aimy, key_msg key);
	bool enemycanBorn();
private:
	Picture picture;
	Music music;
	map map;
	tank_player playertank;

	myQueue bombQueue;
	myQueue bornQueue;
	queue<tanke_enemy*> enemyQueue;
	queue<tanke_enemy*> deadenemyQueue;
	queue<prop*> propertyQueue;
	queue<prop*> propertyusedQueue;

	gameState state;


	bool isover;
	
	int tankmap[26][26];
	int bulltemap[26][26];
	int level;
	int playerlife;
	int score;
	int historyscore;
	int enemynum;
	int count_pass;
	int count_enemypause;
};

bool Escloop(gameScene_PVE& gs);

