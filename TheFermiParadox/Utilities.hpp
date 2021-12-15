#pragma once
#include <iostream>

namespace ConorsUtils
{
	static void CLS() { system("CLS"); }
	template <typename T>
	static T AWAIT(std::string msg = "$ ", bool newLn = true) { 
		T inp;
		if (newLn) std::cout << std::endl;
		std::cout << msg;
		std::cin >> inp;
		return inp;
	}
	static void PRINT(std::string msg, bool newLn = true) {
		std::cout << msg; 
		if (newLn) std::cout << std::endl; 
	}
}

namespace CU = ConorsUtils;