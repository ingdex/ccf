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
//const int MAXV = 1000;
//const int INF = 1000000000;
//
//int n, m, s, G[MAXV][MAXV];
//int d[MAXV];
//bool vis[MAXV] = {false};
//
//void Dijstra(int s)
//{
//    fill(d, d+MAXV, INF);
//    d[s] = 0;
//    for (int i=0; i<n; i++)
//    {
//        int u = -1, MIN = INF;
//        for (int i=0; i<n; i++)
//        {
//            if (vis[i]==false && d[i]<MIN)
//            {
//                u = i;
//                MIN = d[i];
//            }
//        }
//        if (u == -1)
//            return;
//        vis[u] = true;
//        for (int v=0; v<n; v++)
//        {
//            if (vis[v]==false && G[u][v]!=INF && d[u]+G[u][v]<d[v])
//            {
//                d[v] = d[u]+G[u][v];
//            }
//        }
//    }
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int u, v, w;
//    cin >> n >> m >> s;
//    fill(G[0], G[0]+MAXV*MAXV, INF);
//    for (int i=0; i<m; i++)
//    {
//        cin >> u >> v >> w;
//        G[u][v] = w;
//    }
//    Dijstra(0);
//    for (int i=0; i<n; i++)
//        cout << d[i] << " ";
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