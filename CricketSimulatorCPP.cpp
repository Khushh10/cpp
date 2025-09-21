#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

class Player
{
public:
    string name;
    int runs;

    void bat()
    {
        runs = 0;
        for (int i = 0; i < 3; i++)
        {
            int score = rand() % 7;
            cout << name << " hits: " << score << endl;
            runs += score;
            if (score == 4 || score == 6)
                celeb(score);
        }
        cout << name << " total runs: " << runs << endl
             << endl;
    }

    void celeb(int score)
    {
        cout << "Yayyyyy that's a " << score << endl;
    }

    int getRuns()
    {
        return runs;
    }
};

class Team
{
public:
    string teamName;
    Player players[3]; 
    int totalRuns;
    
    void playInnings()
    {
        totalRuns = 0;
        cout << endl
             << teamName << " Batting " << endl;
        for (int i = 0; i < 3; i++)
        {
            players[i].bat();
            totalRuns += players[i].getRuns();
        }
        showScore();
        Sleep(500);
    }

    void showScore()
    {
        cout << teamName << " Total Score: " << totalRuns << endl
             << endl;
    }
};

int main()
{
    srand(time(0));

    Team teams[2];

    cout << "Enter Team A and Team B name: ";
    for (int i = 0; i < 2; i++)
    {
        cin >> teams[i].teamName;
    }

    cout << "Enter Players name of Team A: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> teams[0].players[i].name;
    }

    cout << "Enter Players name of Team B: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> teams[1].players[i].name;
    }

    teams[0].playInnings();

    teams[1].playInnings();

    cout << "Match Result" << endl;
    if (teams[0].totalRuns > teams[1].totalRuns)
        cout << teams[0].teamName << " wins!";
    else if (teams[1].totalRuns > teams[0].totalRuns)
        cout << teams[1].teamName << " wins!";
    else
        cout << "It's a Tie!";

    return 0;
}
