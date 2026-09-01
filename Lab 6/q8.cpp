//Game Score Adjustment
#include <iostream>
using namespace std;

//function to increase every score by 10
void increaseScores(int *scores, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        *scores = *scores + 10;
        scores++;
    }
}
//function to display scores 
void displayScores(int *scores, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << *scores << " ";
        scores++;
    }
    cout << endl;
}
int main() 
{
    //Defining the no. of players(n)
    int n;

    cout << "Enter number of players: ";
    cin >> n;

    int *scores = new int[n];
    cout << "Enter player scores:\n";
    int *ptr = scores;
    for (int i = 0; i < n; i++) 
    {
        cin >> *ptr;
        ptr++;
    }
    //Displaying intial scores
    cout << "\nScores before adjustment:\n";
    displayScores(scores, n);
    increaseScores(scores, n);
    //Displaying updated scorres
    cout << "\nScores after adding 10:\n";
    displayScores(scores, n);

    //Deallocating the allocate memory
    delete[] scores;
    return 0;
}