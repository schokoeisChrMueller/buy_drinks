#pragma once

#include "common.h";
#include "common_class.h";

std::istream& skipline(std::istream& in)
{
	return in.ignore(std::numeric_limits <std::streamsize> :: max(), '\n');
}

void read_file()
{
	int id;
	std::string group;
	std::string category;
	std::string product;
	double prize;
	double liter;
	int nord;
	int east;
	int south;
	int west;
	int central;

	std::vector <non_alcoholic> non_alcoholic_drinks;
	std::vector <alcoholic> alcoholic_drinks;

	std::string filename_1 = "all_drinks.txt";
	//std::string filename_1 = "all_drinks.txt";
	std::string filename_2 = "all_destinations.txt";

	std::ifstream file1_(filename_1);
	std::ifstream file2_(filename_2);

	if (file1_.is_open())
	{
		while (file1_ >> skipline >> id >> group >> category >> product >> prize >> liter >> 
			nord >> east >> south >> west >> central)
		{
			std::cout << id << "\t" << group << "\t" << category << "\t" << product << "\t" << prize << "\t" << liter << "\t" << 
				nord << "\t" << east << "\t" << south << "\t" << west << "\t" << central << std::endl;
			
			if (group == "non_alcoholic")
			{
				non_alcoholic temp_drink_1 (id, category, product, prize, liter, nord, east, south, west, central);
				non_alcoholic_drinks.push_back (temp_drink_1);
			}
			else if (group == "alcoholic")
			{
				alcoholic temp_drink_2 (id, category, product, prize, liter, nord, east, south, west, central);
				alcoholic_drinks.push_back (temp_drink_2);
			}
		}
		file1_.close();
	}
	else
		std::cout << "file is not open" << std::endl;
}

void write_file()
{
	std::fstream myFile;

	myFile.open ("invoice_template.txt", std::ios::out);

	if (myFile.is_open())
	{
		myFile << "Hello" << std::endl;
		myFile << "This is second line" << std::endl;
		myFile.close();
	}

	myFile.open("invoice_template.txt", std::ios::app);

	if (myFile.is_open())
	{
		myFile << "Hello2" << std::endl;
		myFile.close();
	}
}