#include <string>

namespace Weapon {
	class Weapon {
	public:
		Weapon() {}

		Weapon(int weaponDamage, std::string weaponDamageType, std::string nameOfNewWeapon) : damage(weaponDamage), damageType(weaponDamageType), nameOfWeapon(nameOfNewWeapon) {}

		int damage = 0;
		std::string damageType = "\0";
		std::string nameOfWeapon = "\0";
	};
}