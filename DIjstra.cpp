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
//const int MAXV = 501;
//const int INF = 1000000000;
//int n, m, st, ed;
//int G[MAXV][MAXV], cost[MAXV][MAXV];
//int d[MAXV], c[MAXV], pre[MAXV];
//bool vis[MAXV] = {false};
//
//void Dijstra(int s)
//{
//    fill(d, d+MAXV, INF);
//    fill(c, c+MAXV, INF);
//    d[st] = 0;
//    c[st] = 0;
//    for (int i=0; i<n; i++)
//    {
//        int u = -1, MIN = INF;
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
//        for (int v=0; v<n; v++)
//        {
//            if (vis[v]==false && G[u][v]!=INF)
//            {
//                if (d[u]+G[u][v]<d[v])
//                {
//                    pre[v] = u;
//                    d[v] = d[u]+G[u][v];
//                    c[v] = c[u]+cost[u][v];
//                }
//                else if (d[u]+G[u][v]==d[v])
//                {
//                    if (c[u]+cost[u][v]<c[v])
//                    {
//                        c[v] = c[u]+cost[u][v];
//                        pre[v] = u;
//                    }
//                }
//            }
//        }
//    }
//}
//
//void DFS(int v)
//{
//    if (v == st)
//    {
//        cout << v << " ";
//        return;
//    }
//    DFS(pre[v]);
//    cout << v << " ";
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    fill(G[0], G[0]+MAXV*MAXV, INF);
//    fill(cost[0], cost[0]+MAXV*MAXV, INF);
//    cin >> n >> m >> st >> ed;
//    for (int i=0; i<m; i++)
//    {
//        int u, v, w, c;
//        cin >> u >> v >> w >> c;
//        G[u][v] = w;
//        G[v][u] = w;
//        cost[u][v] = c;
//        cost[v][u] = c;
//    }
//    Dijstra(st);
//    DFS(ed);
//    cout << endl << d[ed] << ' ' << c[ed];
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