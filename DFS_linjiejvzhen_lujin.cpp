///**Dijstra, 可计算具体路径**/
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
//const int MAXV = 2010;
//const int INF = 1000000000;
//
//int n, m, s, G[MAXV][MAXV];
//int d[MAXV];
//int pre[MAXV];
//bool vis[MAXV] = {false};
//
//void Dijstra(int s)
//{
//    fill(d, d+MAXV, INF);
//    d[s] = 0;
//    int u = -1;
//    for (int i=0; i<n; i++)
//        pre[i] = i;
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
//        for (int i=0; i<n; i++)
//        {
//            if (vis[i]==false && G[u][i]!=INF && d[u]+G[u][i]<d[i])
//            {
//                pre[i] = u;
//                d[i] = d[u]+G[u][i];
//            }
//        }
//    }
//}
//
//void DFS(int s, int v)
//{
//    if (v == s)
//    {
//        cout << s;
//        return;
//    }
//    DFS(s, pre[v]);
//    cout << "->" << v;
//    return;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int u, v, w;
//    fill(G[0], G[0]+MAXV*MAXV, INF);
//    cin >> n >> m >> s;
//    for (int i=0; i<m; i++)
//    {
//        cin >> u >> v >> w;
//        G[u][v] = w;
//    }
//    Dijstra(0);
//    for (int i=0; i<n; i++)
//    {
//        cout << d[i] << " ";
//    }
//    DFS(0, 3);
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