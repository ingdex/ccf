#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int price[n];
    int re[n];
    for (int i=0; i<n; i++)
    {
        cin >> price[i];
    }
    for (int i=0; i<n; i++)
    {
        if (i == 0)
        {
            re[i] = (price[0] + price[1])/2;
        }
        else if (i == n-1)
        {
            re[i] = (price[n-2] + price[n-1])/2;
        }
        else
        {
            re[i] = (price[i-1] + price[i] + price[i+1])/3;
        }
    }
    for (int i=0; i<n; i++)
    {
        cout << re[i] << " ";
    }

    return 0;
}
