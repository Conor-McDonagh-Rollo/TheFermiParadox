#pragma once
#include <iostream>

namespace ConorsUtils
{
	static void CLS() { system("CLS"); }
	template <typename T = std::string>
	static T AWAIT(std::string msg = "$ ", bool newLn = true) { 
		T inp;
		if (newLn) std::cout << std::endl;
		std::cout << msg;
		std::cin >> inp;
		return inp;
	}
	static void PAUSE(std::string msg = "$ Press any key to continue", bool newLn = true) {
		if (newLn) std::cout << std::endl;
		std::cout << msg;
		std::cin.get();
		if (newLn) std::cout << std::endl;
	}
	static void PRINT(std::string msg, bool newLn = true) {
		std::cout << msg; 
		if (newLn) std::cout << std::endl; 
	}
}

namespace CU = ConorsUtils;