#include <iostream>
#include <string>

using namespace std;

int mp[3][3];

int win()
{
    int i, j;
    for (i=0; i<3; i++)
    {
        //column
        if (mp[i][0]==mp[i][1] && mp[i][1]==mp[i][2])
        {
            if (mp[i][0] != 0)
            {
                return mp[i][0];
            }
        }
        //row
        if (mp[0][i]==mp[1][i] && mp[1][i]==mp[2][i])
        {
            if (mp[0][i] != 0)
            {
                return mp[0][i];
            }
        }
    }
    //对角线
    if (mp[1][1] != 0)
    {
        if (mp[0][0]==mp[1][1] && mp[1][1]==mp[2][2])
        {
            return mp[1][1];
        }
        if (mp[0][2]==mp[1][1] && mp[1][1]==mp[2][0])
        {
            return mp[1][1];
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (mp[i][j] == 0)
            {
                return 0;
            }
        }
    }
    return -1;//平局
}

int DFS(int turn)
{
    int i, j;
    int re = win();
    int score = 0;
    if (re != 0)
    {
        if (re == -1)
        {
            return 0;
        }
        else
        {
            for (i=0; i<3; i++)
            {
                for (j=0; j<3; j++)
                {
                    if (mp[i][j] == 0)
                    {
                        score++;
                    }
                }
            }
            if (re == 1)    //Alice wins
            {
                score = score+1;
            }
            else
            {
                score = -(score+1);
            }
            return score;
        }
    }
    if (turn == 1)
    {
        score = -100;
    }
    else
    {
        score = 100;
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (mp[i][j] != 0)
            {
                continue;
            }
            if (turn == 1)
            {
                mp[i][j] = 1;
                score = max(score, DFS(0));
            }
            else
            {
                mp[i][j] = 2;
                score = min(score, DFS(1));
            }
            mp[i][j] = 0;
        }
    }

    return score;
}

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                cin >> mp[i][j];
            }
        }
        cout << DFS(1) << endl;
    }

    return 0;
}
