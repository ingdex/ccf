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
//#define MAXN 1001
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
//    int a[MAXN];
//    int n, max = 0;
//    cin >> n;
//    for (int i=1; i<=n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i=1; i<=n; i++)
//    {
//        int h = a[i];
//        int l = 1;
//        for (int j=i-1; j>=1; j--)
//            if (a[j] >= h) l++;
//            else break;     /**注意连续存在的高度不低于方格i的方格才能计算，要加else的情况**/
//        for (int j=i+1; j<=n; j++)
//            if (a[j] >= h) l++;
//            else break;
//        int size;
//        size = l * h;
//        max = size>max?size:max;
//    }
//    cout << max;
//}
