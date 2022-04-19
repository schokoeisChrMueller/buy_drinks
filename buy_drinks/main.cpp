#include "common.h"
#include "common_class.h";

int main()
{
	//int x, y;

	//std::cin >> x >> y;

	//Say_Hello(x ,y);

	//test1 t1;

	if (start_window() == 1)
	{
		read_file();
	}

	std::cout << "Press 1 to clear the window" << std::endl;
	
	int command_2 = 0;

	std::cin >> command_2;
	
	if (command_2 == 1)
	{
		clear_window();
	}
	
	write_file();

	return 0;
}