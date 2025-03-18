#include <string>

namespace StringManip {
	inline std::string stringToLower(std::string originalString) {
		std::string adjustedString = "";
		for (char targetCharacter : originalString) {
			if (targetCharacter >= 65 && targetCharacter < 91) {
				targetCharacter += 32;
				adjustedString += targetCharacter;
			}
			else {
				adjustedString += targetCharacter;
			}
		}
		return adjustedString;
	}
}