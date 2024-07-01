#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char board[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};

bool win(char player)
{
    if (board[0][0] == player && board[0][1] == player && board[0][2] == player) 
    {
        return true;
    }

    else if (board[1][0] == player && board[1][1] == player && board[1][2] == player) 
    {
        return true;
    }

    else if (board[2][0] == player && board[2][1] == player && board[2][2] == player) 
    {
        return true;
    }

    else if (board[0][0] == player && board[1][0] == player && board[2][0] == player) 
    {
        return true;
    }

    else if (board[0][1] == player && board[1][1] == player && board[2][1] == player) 
    {
        return true;
    }

    else if (board[0][2] == player && board[1][2] == player && board[2][2] == player) 
    {
        return true;
    }

    else if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true;
    }

    else if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
    {
        return true;
    }

    return false;
}

void bord() 
{
    for (int i = 0; i < 3; i++)
    {
        cout << "|";
        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

void computerMove()
{
    srand(time(0)); 
    int r, c;
    while (true)
    {
        r = rand() % 3;
        c = rand() % 3;
        if (board[r][c] == '*')
        {
            board[r][c] = 'O';
            break;
        }
    }
}

int main()
{
    char player = 'X'; 
    int r, c;
    int turns = 0;
    int mode;

    cout << "|__Welcome_______to___|"<<endl;
    cout << "|                     |"<<endl;
    cout << "|  TIC    TAC    TOE  |"<<endl;
    cout << "|_____________________|"<<endl;
    cout <<endl;

    cout << "Press:" << endl;
    cout << "1)-Player vs Player" << endl;
    cout << "2)-Player vs Computer" << endl;
    cin >> mode;

    while (turns < 9)
    {
        cout << "PLAYER 1 (X)          -          PLAYER 2 (O)" << endl
         << endl;
        bord();

        if (mode == 1 || (mode == 2 && player == 'X'))
        {
            cout << "Player " << player << " enter row and column: ";
            cin >> r >> c;

            if (r >= 0 && r < 3 && c >= 0 && c < 3 && board[r][c] == '*') 
            {
                board[r][c] = player; 
                turns++;             

                if (win(player)) 
                {
                    bord();
                    cout << "Player " << player << " wins! Congrats!" << endl;
                    return 0;
                }

                if (player == 'X') 
                {
                    player = 'O';
                }
                else
                {
                    player = 'X';
                }
            }
            else 
            {
                cout << "Invalid Entry. Write Again." << endl
                     << endl;
            }
        }
        else if (mode == 2 && player == 'O')
        {
            computerMove();
            turns++;
            if (win(player)) 
            {
                bord();
                cout << "Computer wins! Better luck next time." << endl;
                return 0; 
            }
            player = 'X'; 
        }
    }

    cout << "THE GAME HAS BEEN DRAWN. NOBODY WON." << endl;

    return 0;
}
