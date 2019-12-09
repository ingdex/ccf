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
//    int v, dis;
//} Node;
//const int MAXV = 1000;
//const int INF = 0x3fffffff;
//int n, d[MAXV];
//vector <node> Adj[MAXV];
//bool vis[MAXV] = {false};
//
//void Dijstra(int s)
//{
//    fill(d, d+MAXV, INF);
//    d[s] = 0;
//    for (int i=0; i<n; i++)
//    {
//        int MIN = INF, u = -1;
//        for (int j=0; j<n; j++)
//        {
//            if (vis[j]==false && d[j]<MIN)
//            {
//                u = j;
//                MIN = d[j];
//            }
//        }
//        if (u == -1)
//            return;
//        vis[u] = true;
//        for (int i=0; i<Adj[u].size(); i++)
//        {
//            int v = Adj[u][i].v;
//            if (vis[v]==false && Adj[u][i].dis+d[u]<d[v])
//            {
//                d[v] = d[u]+Adj[u][i].dis;
//            }
//        }
//    }
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//
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