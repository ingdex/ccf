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
////#define MAXN 1000
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
//int f[MAXN][MAXN], dp[MAXN][MAXN];
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int n;
//    cin >> n;
//    for (int i=1; i<=n; i++)
//    {
//        for (int j=1; j<=i; j++)
//        {
//            cin >> f[i][j];
//        }
//    }
//    for (int j=1; j<=n; j++)
//    {
//        dp[n][j] = f[n][j];
//    }
//    for (int i=n-1; i>=1; i--)
//    {
//        for (int j=1; j<=i; j++)
//        {
//            dp[i][j] = max(dp[i+1][j], dp[i+1][j+1])+f[i][j];
//        }
//    }
//    cout << dp[1][1];
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