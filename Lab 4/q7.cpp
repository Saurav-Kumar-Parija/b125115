#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string playerName;
    int health , score , level;

public:

    //Constructor to intialize the variables
    Player(string name, int h, int s, int l)
    {
        playerName = name;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager
{
public:
    void displayPlayerDetails(Player p)
    {
        cout << "----- Player Details -----" << endl;
        cout << "Player Name: " << p.playerName << endl;
        cout << "Health     : " << p.health << endl;
        cout << "Score      : " << p.score << endl;
        cout << "Level      : " << p.level << endl;
    }

    void checkAlive(Player p)
    {
        if (p.health > 0)
        {
            cout << "Player Status: Alive" << endl;
        }
        else
        {
            cout << "Player Status: Dead" << endl;
        }
    }

    void displayLevelAndScore(Player p)
    {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main()
{
    Player p("SKP", 85, 1500, 5);

    GameManager manager;

    manager.displayPlayerDetails(p);
    manager.checkAlive(p);
    manager.displayLevelAndScore(p);

    return 0;
}