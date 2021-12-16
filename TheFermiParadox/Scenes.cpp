#include "Scenes.h"
#include <iostream>
#include "Utilities.hpp"

using namespace std;

std::string quotes[9] = {
		"The hush of the night sky is the silence of a graveyard.\n- Ted Chiang",
		"Two possibilities exist: either we are alone in the Universe \nor we are not. Both are equally terrifying.\n- Arthur C.Clarke",
		"The Earth is the cradle of humanity, but mankind cannot stay \nin the cradle forever.\n- Konstantin Tsiolkovsky",
		"The Universe is under no obligation to make sense to you.\n- Neil deGrasse Tyson",
		"The eternal silence of these infinite spaces frightens me.\n- Blaise Pascal",
		"Space exploration is a force of nature unto itself that no \nother force in society can rival.\n- Neil deGrasse Tyson",
		"I don't think the human race will survive the next thousand \nyears, unless we spread into space.\n- Stephen Hawking",
		"We must still think of ourselves as pioneers to understand \nthe importance of space.\n- Buzz Aldrin",
		"I think space is the start of a great journey for human-kind\n- Alan Rondoleanu"
};

void Scenes::Title()
{
	srand(time(NULL));
	CU::PRINT("  _____ _");
	CU::PRINT(" |_   _| |_  ___");
	CU::PRINT("   | | | ' \\/ -_)");
	CU::PRINT("  _|_| |_||_\\___|  _");
	CU::PRINT(" | __|__ _ _ _ __ (_)");
	CU::PRINT(" | _/ -_) '_| '  \\| |");
	CU::PRINT(" |_|\\___|_| |_|_|_|_|  _  ");
	CU::PRINT(" | _ \\__ _ _ _ __ _ __| |_____ __");
	CU::PRINT(" |  _/ _` | '_/ _` / _` / _ \\ \\ /");
	CU::PRINT(" |_| \\__,_|_| \\__,_\\__,_\\___/_\\_\\");
	CU::PRINT("________________________________________");
	int ran = rand() % 9;
	CU::PRINT(quotes[ran]);
	CU::PAUSE();
}
