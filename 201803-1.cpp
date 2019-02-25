#include <iostream>

using namespace std;

int main() {
    int totalScore = 0, lastScore = 0;
    int x;
    cin >> x;
    do{
        switch (x)
        {
            case 1:
                lastScore = 1;
                break;
            case 2:
                if (lastScore == 0 || lastScore == 1)
                {
                    lastScore = 2;
                    break;
                }
                else
                {
                    lastScore = lastScore + 2;
                    break;
                }
            default:
                break;
        }
        totalScore += lastScore;
        cin >> x;
    } while (x != 0);
    cout << totalScore << endl;
    return 0;
}