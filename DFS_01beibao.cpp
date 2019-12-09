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
//#define MAXN 1000
//
//using namespace std;
//vector <string> split(string str, const char *delim);
//char *itoa(int n);
//int atoi(char * c);
//
//
//const int maxn = 30;
//int n, V, maxValue = 0;
//int w[maxn], c[maxn];
//
//void DFS(int index, int sumW, int sumC)
//{
//    if (index == n)
//    {
//        if (sumW<=V && sumC>maxValue)
//        {
//            maxValue = sumC;
//        }
//        return;
//    }
//    DFS(index+1, sumW, sumC);
//    DFS(index+1, sumW+w[index], sumC+c[index]);
//    return;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    cin >> n >> V;
//    for (int i=0; i<n; i++)
//    {
//        cin >> w[i];
//    }
//    for (int i=0; i<n; i++)
//    {
//        cin >> c[i];
//    }
//    DFS(0, 0, 0);
//    cout << maxValue;
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
