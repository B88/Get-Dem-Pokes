// Fill out your copyright notice in the Description page of Project Settings.


#include "Pokemon.h"

Pokemon::Pokemon(std::string name, int hp, int atk, int def, int spdef, int spatk, int speed, int IVhp, int IVatk, int IVdef, int IVspdef, int IVspatk, int IVspeed, int EVhp, int EVatk, int EVdef, int EVspdef, int EVspatk, int EVspeed, int baselvl, int pokedexNum)
{
	name = name;
	hp = hp;
	atk = atk;
	def = def;
	spdef = spdef;
	spatk = spatk;
	speed = speed;
	IVhp = IVhp;
	IVatk = IVatk;
	IVdef = IVdef;
	IVspdef = IVspdef;
	IVspatk = IVspatk;
	IVspeed = IVspeed;
	EVhp = EVhp;
	EVatk = EVatk;
	EVdef = EVdef;
	EVspdef = EVspdef;
	EVspatk = EVspatk;
	EVspeed = EVspeed;
	baselvl = baselvl;
	pokedexNum = pokedexNum;

}

Pokemon::~Pokemon()
{
}
