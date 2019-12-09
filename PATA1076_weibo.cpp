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
//    int id, layer;
//} Node;
//
//const int MAXV = 2010;
//const int INF = 1000000000;
//
//vector<node> Adj[MAXV];
//bool inq[MAXV] = {false};
//
//int BFS(int s, int L)
//{
//    int numForward = 0;
//    queue<node> q;
//    node start;
//    start.id = s;
//    start.layer = 0;
//    q.push(start);
//    inq[start.id] = true;
//    while (!q.empty())
//    {
//        node u = q.front();
//        q.pop();
//        for (int i=0; i<Adj[u.id].size(); i++)
//        {
//            node v = Adj[u.id][i];
//            v.layer = u.layer+1;
//            if (inq[v.id]==false && v.layer<=L)
//            {
//                q.push(v);
//                inq[v.id] = true;
//                numForward++;
//            }
//        }
//    }
//    return numForward;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    node user;
//    int n, L, numFollow, idFollow;
//    cin >> n >> L;
//    for (int i=1; i<=n; i++)
//    {
//        user.id = i;
//        cin >> numFollow;
//        for (int j=0; j<numFollow; j++)
//        {
//            cin >> idFollow;
//            Adj[idFollow].push_back(user);
//        }
//    }
//    int numQuery, s;
//    cin >> numQuery;
//    for (int i=0; i<numQuery; i++)
//    {
//        memset(inq, false, sizeof(inq));
//        cin >> s;
//        int numForward = BFS(s, L);
//        cout << numForward << endl;
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