#include <iostream>

using namespace std;

int main() {
    int pos[102];
    int direction[102];//-1:left, 1:right
    int n, L, t;
    int i;
    cin >> n >> L >> t;
    pos[0] = 0;     //left wall
    pos[n+1] = L;   //right wall
    //get begin pos
    for (i=1; i<=n; i++)
    {
        cin >> pos[i];
        direction[i] = 1;
    }
    //
    for (i=0; i<t; i++)
    {
        //get every ball's direction
        int j, k;
//        if (pos[1] == 0)
//        {
//            direction[1] = 1;
//        }
        for (j=0; j<=n; j++)
        {
            for (k=j+1; k<=n+1; k++)
            {
                if (pos[j] == pos[k])
                {
                    direction[j] = -direction[j];
                    direction[k] = -direction[k];
                    break;
                }
            }
        }
        //get every ball's pos after 1s
        for (j=1; j<=n; j++)
        {
            pos[j] += direction[j];
        }
    }
    for (i=1; i<=n; i++)
    {
        cout << pos[i];
        if (i != n) cout << " ";
    }
    cout << endl;
    return 0;
}