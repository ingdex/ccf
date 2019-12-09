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
//int d[MAXV], minCost=INF;
//bool vis[MAXV] = {false};
//vector <int> pre[MAXV];
//vector <int> tempPath, path;
//
//void Dijstra(int s)
//{
//    fill(d, d+MAXV, INF);
//    d[st] = 0;
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
//                    d[v] = d[u]+G[u][v];
//                    pre[v].clear();
//                    pre[v].push_back(u);
//                }
//                else if (d[u]+G[u][v]==d[v])
//                {
//                    pre[v].push_back(u);
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
//        tempPath.push_back(v);
//        int tempCost = 0;
//        for (int i=tempPath.size()-1; i>0; i--)
//        {
//            int id = tempPath[i];
//            int idNext = tempPath[i-1];
//            tempCost += cost[idNext][id];
//        }
//        if (tempCost < minCost)
//        {
//            minCost = tempCost;
//            path = tempPath;
//        }
//        tempPath.pop_back();
//        return;
//    }
//    tempPath.push_back(v);
//    for (int i=0; i<pre[v].size(); i++)
//    {
//        DFS(pre[v][i]);
//    }
//    tempPath.pop_back();
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
//    for (int i=path.size()-1; i>=0; i--)
//    {
//        cout << path[i] << " ";
//    }
//    cout << d[ed] << " " << minCost;
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