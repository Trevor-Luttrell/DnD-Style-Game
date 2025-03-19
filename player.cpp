#include "weapon.cpp"
#include <vector>

namespace Player {
	class Player {
	public:
		Player(){}

		Player(int maxHealth, Weapon::Weapon startingWeapon, std::string colorOfArmor) : health(maxHealth), playerActiveWeapon(startingWeapon), armorColor(colorOfArmor) {
			playerInventoryWeapons.resize(0);
			playerInventoryWeapons.push_back(startingWeapon);
		}

		int health = 0;
		int strength = 0;
		int intelligence = 0;
		int dexterity = 0;
		int charisma = 0;
		std::vector<Weapon::Weapon> playerInventoryWeapons;
		Weapon::Weapon playerActiveWeapon;
		std::string armorColor = "blank";
	};
}

//Player Variables - stats, health, weapon inventory, weapon in hand
//Player Functions - getters and setters to make variabels private