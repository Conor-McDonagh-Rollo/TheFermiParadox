#include "Scenes.h"
#include <iostream>
#include "Utilities.hpp"

using namespace std;

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
	int ran = rand() % 5;
	switch (ran)
	{
	case 0:
		CU::PRINT("The hush of the night sky is the silence of a graveyard.\n- Ted Chiang");
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
	CU::AWAIT<int>();
}
