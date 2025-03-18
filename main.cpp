#include <iostream>
#include "player.cpp"
#include "stringmanip.cpp"

int main() {
	Weapon::Weapon starterWeapon(15, "blunt", "Great Axe");
	Player::Player mainCharacter(20, starterWeapon, "red");
	std::string playerExitLoopInput = "\0";

	//Story exposition
	

	do{
		std::cout << "Input \"quit\" to exit loop" << std::endl;
		std::cin >> playerExitLoopInput;
	} while (StringManip::stringToLower(playerExitLoopInput) != "quit");


	std::cout << "string function worked. Checking stats: ";
	std::cout << mainCharacter.health << mainCharacter.armorColor << mainCharacter.playerActiveWeapon.nameOfWeapon << mainCharacter.playerActiveWeapon.damageType << mainCharacter.playerActiveWeapon.damage <<
		mainCharacter.playerInventoryWeapons[0].nameOfWeapon << mainCharacter.intelligence;

}


/*
Variables:
Player - stats, health, weapon inventory, weapon in hand
Weapon - Damage, type of damage, attack speed, weapon name
Enemies (Enemy types inherit from this class) - weapon, 
GameBattleState - WIP

Functions:
Player - Get, set
Weapon - 
Enemies - 
GameBattleState - Phases (prep, damage, results)
*/