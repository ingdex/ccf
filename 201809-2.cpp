///** 在函数内部初始化了一个相当大的数组，会导致内存溢出，作为全局变量声明即可**/
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
//const int MAXV = 1000001;
////const int INF = 1000000000;
//int H[MAXV];
//int W[MAXV];
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int n;
//    memset(H, 0, MAXV);
//    memset(W, 0, MAXV);
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        int s, t;
//        cin >> s >> t;
//        for (int j=s; j<t; j++)
//        {
//            H[j] = 1;
//        }
//    }
//    for (int i=0; i<n; i++)
//    {
//        int s, t;
//        cin >> s >> t;
//        for (int j=s; j<t; j++)
//        {
//            W[j] = 1;
//        }
//    }
//    int count = 0;
//    for (int i=1; i<1000001; i++)
//    {
//        if(H[i] && W[i])
//            count++;
////        count++;
//    }
//    cout << count;
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