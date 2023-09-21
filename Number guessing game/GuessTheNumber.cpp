#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "\n\t\tWelcome to guess the number game ... " << endl;
    cout << "\t\tGuess the number belonging between 1 - 100" << endl;
    cout << "\t\tYou will be having limited choises" << endl;

    while (true)
    {
        int difficulty;
        cout << "\nEnter the difficulty level of the game : " << endl;
        cout << "1 for Easy level \t" << endl;
        cout << "2 for medium level \t" << endl;
        cout << "3 for hard level \t" << endl;
        cout << "0 for ending the game\t" << endl;

        cin >> difficulty;

        // generating the random number
        srand(time(0));
        int randomNumber = 1 + (rand() % 100);
        int pChoice;

        // srand(time(0));
        // int rno = 1 + (rand() % 100);
        // int playersNum;

        if (difficulty == 1)
        {
            cout << "You are having 10 choices \n";
            cout << "Enter any number between 1 to 100:";
            int turns = 10;
            for (int i = 1; i <= 10; i++)
            {
                cin >> playersNum;
                if(playersNum==randomNumber)
                {
                    
                }
            }
        }
    }
    return 0;
}