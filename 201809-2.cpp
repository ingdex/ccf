#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int n;
    char t[1000001];
    memset(t, 0, 1000001);
    int maxt = 0;
    int total = 0;  //可聊总时间
    int a, b, c, d;
    cin >> n;
    int i, j;
    for (i=0; i<n; i++)
    {
        cin >> a >> b;
        maxt = max(maxt, b);
        for (j=a; j<b; j++)
        {
            t[j] = 1;
        }
    }
    for (i=0; i<n; i++)
    {
        cin >> c >> d;
        maxt = max(maxt, d);
        for (j=c; j<d; j++)
        {
            if (t[j] == 1)
            {
                total++;
            }
        }
    }
    cout << total;

    return 0;
}
