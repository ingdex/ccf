////
//// Created by ingdex on 2019/9/2.
////
//
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <stdio.h>
//#include <queue>
//#include <algorithm>
//#include <list>
//#include <fstream>
//#include <cstdlib>
//#include <map>
//#include <sstream>
//#include <cmath>
//
//#define MAXM 1000
//
//using namespace std;
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
//
//int main(void)
//{
//    int n, max=0;
//    int num, count[10001];  /**数字的个数是1-1000，但是范围是1-10000，所以因该是10001**/
//    memset(count, 0, sizeof(count));
//    cin >> n;
//    for (int i=1; i<=n; i++)
//    {
//        cin >> num;
//        if (num > max)
//            max = num;
//        count[num]++;
//    }
//    int re, time = 0;
//    for (int i=max; i>0; i--)
//    {
//        if (count[i] >= time)
//        {
//            time = count[i];
//            re = i;
//        }
//    }
//    cout << re;
//}