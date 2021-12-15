#include "Scenes.h"
#include <iostream>
#include "Utilities.hpp"

using namespace std;

void Scenes::Title()
{
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
	CU::AWAIT<int>();
}
