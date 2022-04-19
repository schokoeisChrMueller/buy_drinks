#pragma once

#include "common.h"

class  drink
{
public:

};


class non_alcoholic : public drink
{
	int m_id;
	std::string m_category;
	std::string m_product;
	double m_prize;
	double m_liter;
	int m_nord;
	int m_east;
	int m_south;
	int m_west;
	int m_central;

public:
	non_alcoholic (int id, std::string category, std::string product, double prize, double liter, 
		int nord, int east, int south, int west, int central);

};

non_alcoholic::non_alcoholic (int id, std::string category, std::string product, double prize, double liter,
	int nord, int east, int south, int west, int central)
{
	m_id = id;
	m_category = category;
	m_product = product;
	m_prize = prize;
	m_liter = liter;
	m_nord = nord;
	m_east = east;
	m_south = south;
	m_west = west;
	m_central = central;
}


class alcoholic : public drink
{
	int m_id;
	std::string m_category;
	std::string m_product;
	double m_prize;
	double m_liter;
	int m_nord;
	int m_east;
	int m_south;
	int m_west;
	int m_central;

public:
	alcoholic (int id, std::string category, std::string product, double prize, double liter,
		int nord, int east, int south, int west, int central);

};

alcoholic::alcoholic(int id, std::string category, std::string product, double prize, double liter,
	int nord, int east, int south, int west, int central)
{
	m_id = id;
	m_category = category;
	m_product = product;
	m_prize = prize;
	m_liter = liter;
	m_nord = nord;
	m_east = east;
	m_south = south;
	m_west = west;
	m_central = central;
}