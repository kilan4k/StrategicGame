#pragma once
#include <vector>
struct Ideology {
	int ideologyID;
	std::string ideologyName;

};
inline const std::vector<Ideology> ideologies = {
	//Left Authoritarian
	{1, "Marxism-Leninism"},
	{2, "Juche"},
	{3, "Stalinism"},
	{4, "Titoism"},
	//Right Authoritarian
	{5, "Fascism"},
	{6, "National Conservatism"},
	{7, "Nationalism"},
	{8, "Oligarchism"},
	//Left Libertarian
	{9, "Anarcho-Communism"},
	{10, "Anarcho-Syndicalism"},
	{11, "Libertarian Socialism"},
	//Right Libertarian
	{12, "Anarcho-Capitalism"},
	{13, "Minarchism"},
	{14, "Libertarianism"},
	//Left Center
	{15, "Democratic Socialism"},
	{16, "Social Democracy"},
	{17, "Progressivism"},
	{18, "Left Populism"},
	{19, "Eco-Socialism"},
	//Center
	{20, "Third Way"},
	{22, "Centrism"},
	//Right Center
	{21, "Christian Democracy"},
	{23, "Liberalism"},
	{24, "Liberal Conservatism"},
	{25, "Conservatism"},
	{26, "Right Populism"};

};