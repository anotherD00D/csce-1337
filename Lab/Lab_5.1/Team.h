#include <iostream>
#include <string>
#include <iomanip>

#ifndef TEAM_H
#define TEAM_H

using namespace std;

class Team {

public:
    Team();
    Team(string name, int wins, int losses);

    //functions
    double GetWinPercentage();

    void SetWins(int wins);
    void SetLosses(int losses);
    void SetName(string name);

    void PrintStanding();

private:
    int wins;
    int losses;
    string name;
};

#endif