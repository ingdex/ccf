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
//const int MAXV = 500100;
//const int MAXE = 500100;
//const int INF = 0x3fffffff;
//int father[MAXV];
//int n, m, root;
//
//struct node{
//
//} Node;
//
//struct edge{
//    int u, v, w;
//}E[MAXE];
//
//int findFather(int s)
//{
//    int a = s;
//    //find root
//    while (father[s] != s)
//    {
//        s = father[s];
//    }
//    //路径压缩
//    while (a != father[a])
//    {
//        int z = father[a];
//        father[a] = s;
//        a = z;
//    }
//}
//
//bool cmp(edge e1, edge e2)
//{
//    return e1.w < e2.w;
//}
//
//int kruskal(int n, int m)
//{
//    int ans = 0, numEdge = 0, MAX = 0;
//    for (int i=1; i<=m; i++)
//    {
//        father[i] = i;
//    }
//    sort(E+1, E+1+m, cmp);
//    for (int i=1; i<=m; i++)
//    {
//        int fatherU = findFather(E[i].u);
//        int fatherV = findFather(E[i].v);
//        if (fatherU != fatherV)
//        {
//            father[fatherV] = fatherU;
//            numEdge++;
//            MAX = E[i].w;
//        }
//        if (numEdge == n-1)
//            break;
//    }
//    if (numEdge != n-1)
//        return 0;
//    return MAX;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    cin >> n >> m >> root;
//    for (int i=1; i<=m; i++)
//    {
//        int u, v, w;
//        cin >> u >> v >> w;
//        E[i].u = u;
//        E[i].v = v;
//        E[i].w = w;
//    }
//    int ans = kruskal(n, m);
//    cout << ans;
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