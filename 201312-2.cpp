////
//// Created by ingdex on 2019/9/2.
////
///**注意审题，识别码为10时使用X替代**/
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
//    string str;
//    cin >> str;
//    int a[11];
//    int k=1;
//    for (int i=0; i<13; i++)
//    {
//        if (str[i] != '-')
//        {
//            if (str[i] == 'X')
//                a[k++] = str[i];
//            else
//                a[k++] = str[i]-'0';
//        }
//    }
//    int n=0;
//    for (int i=1; i<10; i++)
//    {
//        n = n+i*a[i];
//    }
//    n %= 11;
//    if (n == a[10] || (n==10 && a[10]=='X'))
//        cout << "Right";
//    else
//    {
//        for (int i=1; i<10; i++)
//        {
//            if (i == 2 || i == 5)
//            {
//                cout << '-' << a[i];
//            }
//            else cout << a[i];
//        }
//        if (n == 10)
//            cout << "-X";
//        else
//            cout << '-' << n;
//    }
//}
