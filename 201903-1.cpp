///** 特殊数据输出格式的题目一定要用printf，cout输出大于10^5的非整数时会使用科学计数法 **/
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
//#define MAXN 100001
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
//    int max, min;
//    float mid;
//    int n;
//    int num[MAXN];
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        cin >> num[i];
//    }
//    if (num[0] > num[n-1])
//    {
//        max = num[0];
//        min = num[n-1];
//    }
//    else
//    {
//        max = num[n-1];
//        min = num[0];
//    }
//    if (n%2 == 1)
//    {
//        mid = num[(n-1)/2];
//    }
//    else
//    {
//        mid = ((float)(num[n/2-1]+num[n/2]))/2;
//    }
//    if ((int)(mid*2)%2 == 1)
//    {
//        cout << max << " " ;
//        printf("%.1f", mid);
//        cout << " " << min;
//    }
//    else
//        cout << max << " " << (int)mid << " " << min;
//
////    cout << max << " " << mid << " " << min;
//}