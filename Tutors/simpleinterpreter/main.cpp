
#include <iostream>
#include "interpreter.h"

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

int main()
{
	{
		Interpreter ip;
		ip.Compile("../simpleinterpreter/programs/helloworld.p");

		std::cout << "\n";
		ip.Run();
	}

	_CrtDumpMemoryLeaks();

	system("pause");
	return 0;
}

