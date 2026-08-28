#pragma once
#include <vector>
struct Government {
	int governmentId;
	std::string governmentName;
};
inline const std::vector<Government> governments = {
	//Democratic governments
	{1, "Parliament Republic"},
	{2, "President Republic"},
	{3, "Mixed Republic"},
	{4, "Direct Democracy"},
	//Monarchies
	{5, "Absolute Monarchy"},
	{6, "Consitutional Monarchy"},
	{7, "Elective Monarchy"},
	//Authoritarian governments
	{8, "Presidental Autocracy"},
	{9, "Military Junta"},
	{10, "Technocracy"},
	{11, "Single Party State"},
	{12, "Theocracy"},
	{13, "Oligarchy"}
};