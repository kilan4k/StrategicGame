#pragma once
#include <vector>
#include <string>

enum class IdeologyType{
	MarxismLeninism,
	Juche,
	Stalinism,
	Titoism,
	Fascism,
	NationalConservatism,
	Nationalism,
	Oligarchism,
	AnarchoCommunism,
	AnarchoSyndicalism,
	LibertarianSocialism,
	AnarchoCapitalism,
	Minarchism,
	Libertarianism,
	DemocraticSocialism,
	SocialDemocracy,
	Progressivism,
	LeftPopulism,
	EcoSocialism,
	ThirdWay,
	Centrism,
	ChristianDemocracy,
	Liberalism,
	LiberalConservatism,
	Conservatism,
	RightPopulism
};

struct Ideology {
	IdeologyType ideology;
	std::string ideologyName;

};
inline const std::vector<Ideology> ideologies = {
	//Left Authoritarian
	{IdeologyType::MarxismLeninism, "Marxism-Leninism"},
	{IdeologyType::Juche, "Juche"},
	{IdeologyType::Stalinism, "Stalinism"},
	{IdeologyType::Titoism, "Titoism"},
	//Right Authoritarian
	{IdeologyType::Fascism, "Fascism"},
	{IdeologyType::NationalConservatism, "National Conservatism"},
	{IdeologyType::Nationalism, "Nationalism"},
	{IdeologyType::Oligarchism, "Oligarchism"},
	//Left Libertarian
	{IdeologyType::AnarchoCommunism, "Anarcho-Communism"},
	{IdeologyType::AnarchoSyndicalism, "Anarcho-Syndicalism"},
	{IdeologyType::LibertarianSocialism, "Libertarian Socialism"},
	//Right Libertarian
	{IdeologyType::AnarchoCapitalism, "Anarcho-Capitalism"},
	{IdeologyType::Minarchism, "Minarchism"},
	{IdeologyType::Libertarianism, "Libertarianism"},
	//Left Center
	{IdeologyType::DemocraticSocialism, "Democratic Socialism"},
	{IdeologyType::SocialDemocracy, "Social Democracy"},
	{IdeologyType::Progressivism, "Progressivism"},
	{IdeologyType::LeftPopulism, "Left Populism"},
	{IdeologyType::EcoSocialism, "Eco-Socialism"},
	//Center
	{IdeologyType::ThirdWay, "Third Way"},
	{IdeologyType::Centrism, "Centrism"},
	//Right Center
	{IdeologyType::ChristianDemocracy, "Christian Democracy"},
	{IdeologyType::Liberalism, "Liberalism"},
	{IdeologyType::LiberalConservatism, "Liberal Conservatism"},
	{IdeologyType::Conservatism, "Conservatism"},
	{IdeologyType::RightPopulism, "Right Populism"}

};

const Ideology* getIdeologyByEnum(IdeologyType ideology);