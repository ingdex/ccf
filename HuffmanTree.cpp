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
//struct node{
//
//} Node;
//
//priority_queue<long long, vector<long long >, greater<long long>> q;
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int n;
//    long long temp, x, y, ans = 0;
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        cin >> temp;
//        q.push(temp);
//    }
//    while (q.size() > 1)
//    {
//        x = q.top();
//        q.pop();
//        y = q.top();
//        q.pop();
//        q.push(x+y);
//        ans += x+y;
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