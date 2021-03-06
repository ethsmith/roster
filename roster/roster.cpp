#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

// Function prototypes for setting wins and getting wins for the team
void setWins(int amount, int *wins);
int* getWins();

// Create a string for the team name
std::string teamName = "Brode Brotherhood";
// Create a variable for the number of team wins
int teamWins = 5;

int main()
{
	// Create a vector for the members of the team
	std::vector<std::string> team;
	std::vector<std::string>::const_iterator iter;
	team.push_back("Zalae");
	team.push_back("Trump");
	team.push_back("Firebat");
	team.push_back("Disguised Toast");
	team.push_back("Thijs");
	team.push_back("Regis");

	// Create a pointer variable to the team name
	std::string* pTeamName = &teamName;
	// Create a pointer variable to the team wins
	int* pTeamWins = getWins();

	// Print intro message
	std::cout << "Your 2019 Competitive Hearthstone Roster:\n";
	// Loop over every member of the roster
	for (iter = team.begin(); iter != team.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	// Print out the current team wins to the console
	std::cout << "Current Wins: " << *pTeamWins << std::endl;
	std::cout << "Simulating Match for " << *pTeamName << "..." << std::endl;
	// Call the setWins function to add a win to the total number of team wins
	setWins(1, pTeamWins);
	std::cout << "Current Wins: " << *pTeamWins << std::endl;
	std::cout << "Changing Team Name to Aggro Players..." << std::endl;
	// Set team name to Aggro Players using a pointer variable
	*pTeamName = "Aggro Players";
	std::cout << "Team Name: " << *pTeamName << std::endl;
}

// Set wins function that adds wins to the total number of wins
void setWins(int amount, int* wins)
{
	*wins += amount;
}

// Get wins function that returns the total number of wins as a pointer
int* getWins()
{
	int* pTeamWins = &teamWins;
	return pTeamWins;
}
