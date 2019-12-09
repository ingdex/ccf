//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <stdio.h>
//#include <queue>
//#include <stack>
//#include <algorithm>
//#include <list>
//#include <fstream>
//#include <cstdlib>
//#include <map>
//#include <sstream>
//#include <cmath>
//
//using namespace std;
//vector <string> split(string str, const char *delim);
//char *itoa(int n);
//int atoi(char * c);
//
//struct node{
//
//} Node;
//const int MAXN = 2010;
//const int INF = 1000000000;
//
//map<int, string> intToString;
//map<string, int> stringToInt;
//map<string, int> Gang;
//int G[MAXN][MAXN] = {0};
//int weight[MAXN] = {0};
//int n, k, numPerson = 0;
//bool vis[MAXN] = {false};
//
//void DFS(int nowVisit, int &head, int &numMember, int &totalValue)
//{
//    numMember++;
//    vis[nowVisit] = true;
//    if (weight[nowVisit] > weight[head])
//    {
//        head = nowVisit;
//    }
//    for (int i=0; i<numPerson; i++)
//    {
//        if (G[nowVisit][i] > 0)
//        {
//            totalValue += G[nowVisit][i];
//            G[nowVisit][i] = G[i][nowVisit] = 0;
//            if (vis[i] == false)
//            {
//                DFS(i, head, numMember, totalValue);
//            }
//        }
//    }
//}
//
//void DFSTrave()
//{
//    for (int i=0; i<numPerson; i++)
//    {
//        if (vis[i] == false)
//        {
//            int head = i, numMenber = 0, totalValue = 0;
//            DFS(i, head, numMenber, totalValue);
//            if (numMenber>2 && totalValue>k)
//            {
//                Gang[intToString[head]] = numMenber;
//            }
//        }
//    }
//}
//
//int change(string str)
//{
//    if(stringToInt.find(str) != stringToInt.end())
//    {
//        return stringToInt[str];
//    }
//    else
//    {
//        stringToInt[str] = numPerson;
//        intToString[numPerson] = str;
//        return numPerson++;
//    }
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int w;
//    string str1, str2;
//    cin >> n >> k;
//    for (int i=0; i<n; i++)
//    {
//        cin >> str1 >> str2 >> w;
//        int id1 = change(str1);
//        int id2 = change(str2);
//        weight[id1] += w;
//        weight[id2] += w;
//        G[id1][id2] += w;
//        G[id2][id1] += w;
//    }
//    DFSTrave();
//    cout << Gang.size() << endl;
//    map<string, int>::iterator it;
//    for (it=Gang.begin(); it!=Gang.end(); it++)
//    {
//        cout << it->first << " " << it->second << endl;
//    }
//    return 0;
//}
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
//char *itoa(int n)
//{
//    stringstream ss;
//    string s;
//    ss << n;
//    ss >> s;
//    int len = strlen(s.c_str());
//    char *c_str = (char *)malloc(len+1);
//    strcpy(c_str, s.c_str());
//    return c_str;
//}
//
//int atoi(char * c)
//{
//    int n;
//    string s = c;
//    istringstream is(s);
//    is >> n;
//    return n;
//}