///**动态规划**/
//
//
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
//#define MAXN 1000
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
//struct num{
//    int a[4];
//    int m, n;
//};
//
//int main(void)
//{
//    /**把int修改为long long后成功**/
//    long long n, s2[MAXN], s20[MAXN], s23[MAXN], s201[MAXN], s230[MAXN], s0123[MAXN];
//    memset(s2, 0, sizeof(s2));
//    memset(s20, 0, sizeof(s20));
//    memset(s23, 0, sizeof(s23));
//    memset(s201, 0, sizeof(s201));
//    memset(s230, 0, sizeof(s230));
//    memset(s0123, 0, sizeof(s0123));
//    cin >> n;
//    s2[1] = 1;
//    for (int i=2; i<=n; i++)
//    {
//        s2[i] = 1;
//        s20[i] = (s20[i-1]*2+1)%1000000007;
//        s23[i] = (s23[i-1]+1)%1000000007;
//        s201[i] = (s201[i-1]*2+s20[i-1])%1000000007;
//        s230[i] = (s230[i-1]*2+s23[i-1]+s20[i-1])%1000000007;
//        s0123[i] = (s201[i-1]+s230[i-1]+s0123[i-1]*2)%1000000007;
//    }
//    cout << s0123[n];
//}
