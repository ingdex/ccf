//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <stdio.h>
//#include <queue>
//#include <algorithm>
//#include <list>
//#include <fstream>
//#include <cstdlib>
//#include <map>
//
//#define MAXM 1000
//
//using namespace std;
//
//vector <string> split(string str, const char *delim)
//{
//    vector <string> result;
//    int len = str.size();
//    char input[len+1];
//    strcpy(input, str.c_str());
//    char *token = strtok(input, delim);
//    while (token != NULL)
//    {
//        result.push_back(string(token));
//        token = strtok(NULL, delim);
//    }
//    return result;
//}
//
//class hero{
//public:
//    int health;
//    int attack;
//    hero(){};
//    hero(int health, int attack):health(health), attack(attack){}
//};
//
//int main(void)
//{
//    vector <hero> player1, player2;
//    int n;
//    cin >> n;
//    string action;
//    int position, attack, health, attacker, defender;
//    int flag = 0;
//    player1.push_back(hero(30, 0));
//    player2.push_back(hero(30, 0));
//    while (n--)
//    {
//        cin >> action;
//        if (action == "summon")
//        {
//            cin >> position >> attack >> health;
//            if (!flag)
//            {
//                player1.insert(player1.begin()+position, hero(health, attack));
//            }
//            else
//            {
//                player2.insert(player2.begin()+position, hero(health, attack));
//            }
//        }
//        else if (action == "attack")
//        {
//            cin >> attacker >> defender;
//            if (!flag)
//            {
//                player1[attacker].health -= player2[defender].attack;
//                player2[defender].health -= player1[attacker].attack;
//                if (player1[attacker].health <= 0 && attacker != 0)
//                    player1.erase(player1.begin()+attacker);
//                if (player2[defender].health <= 0 && defender != 0)
//                    player2.erase(player2.begin()+defender);
//            }
//            else
//            {
//                player2[attacker].health -= player1[defender].attack;
//                player1[defender].health -= player2[attacker].attack;
//                if (player2[attacker].health <= 0 && attacker != 0)
//                    player2.erase(player2.begin()+attacker);
//                if (player1[defender].health <= 0 && defender != 0)
//                    player1.erase(player1.begin()+defender);
//            }
//        }
//        else if (action == "end")
//        {
//            flag = !flag;
//        }
//    }
//    if (player1[0].health <= 0)
//        cout << -1 << endl;
//    else if (player2[0].health <= 0)
//        cout << 1 << endl;
//    else
//        cout << 0 << endl;
//    cout << player1[0].health << endl;
//    cout << player1.size()-1;
//    for (int i=1; i<player1.size(); i++)
//    {
//        cout << " " << player1[i].health;
//    }
//    cout << endl;
//    cout << player2[0].health << endl;
//    cout << player2.size()-1;
//    for (int i=1; i<player2.size(); i++)
//    {
//        cout << " " << player2[i].health;
//    }
//    cout << endl;
//}
