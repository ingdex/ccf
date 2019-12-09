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
//#define MAXN 100
//
//using namespace std;
//vector <string> split(string str, const char *delim);
//char *itoa(int n);
//int atoi(char * c);
//
//struct node{
//    int x, y;
//}Node;
//
//int n, m;
//int matrix[MAXN][MAXN];
//bool inq[MAXN][MAXN] = {false};
//int X[4] = {-1, 1, 0, 0};
//int Y[4] = {0, 0, -1, 1};
//
//bool judge(int x, int y)
//{
//    if (x<0 || x>=n || y<0 || y>=n)
//    {
//        return false;
//    }
//    if (matrix[x][y]==1 && inq[x][y]==false)
//        return true;
//    return false;
//}
//
//void BFS(int x, int y)
//{
//    queue<node> Q;
//    Node.x = x;
//    Node.y = y;
//    Q.push(Node);
//    inq[x][y] = true;
//    while (!Q.empty())
//    {
//        node top = Q.front();
//        Q.pop();
//        for (int i=0; i<4; i++)
//        {
//            int NewX = top.x + X[i];
//            int NewY = top.y + Y[i];
//            if (judge(NewX, NewY))
//            {
//                Node.x = NewX;
//                Node.y = NewY;
//                Q.push(Node);
//                inq[NewX][NewY] = true;
//            }
//        }
//    }
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    cin >> n >> m;
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<m; j++)
//        {
//            cin >> matrix[i][j];
//        }
//    }
//    int ans = 0;
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<m; j++)
//        {
//            if (matrix[i][j]==1 && inq[i][j]==false)
//            {
//                ans++;
//                BFS(i, j);
//            }
//        }
//    }
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