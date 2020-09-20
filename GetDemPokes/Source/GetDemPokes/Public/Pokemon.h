// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>

/**
 * 
 */
class GETDEMPOKES_API Pokemon
{
	std::string name;
	int hp, atk, def, spdef, spatk, speed;
	int IVhp, IVatk, IVdef, IVspdef, IVspatk, IVspeed;
	int EVhp, EVatk, EVdef, EVspdef, EVstatk, EVspeed;
	
	int baselvl, pokedexNum;
	
	// attack types, got 4 attacks max
	//attack* atk1;
	//attack* atk2;
	//attack* atk3;
	//attack* atk4;

	// pokemon types, got 2 max
	//pokeType* typePrime;
	//pokeType* typeSecondary;
public:
	Pokemon(std::string name, int hp, int atk, int def, int spdef, int spatk, int speed, int IVhp, int IVatk, int IVdef, int IVspdef, int IVspatk, int IVspeed, int EVhp, int EVatk, int EVdef, int EVspdef, int EVstatk, int EVspeed, int baselvl, int pokedexNum);
	~Pokemon();
};
