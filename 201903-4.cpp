///**
// * 进程个数可能大于10，因此需要将操作编号从字符串转化为数字进行比较，仅仅用str[1]比较会出错
// * **/
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
//struct node{
//    int type, des;
//    node(string s)
//    {
//        if (s[0] == 'R')
//            type = 0;
//        else
//            type = 1;
//        des = 0;
//        for (int i=1; i<s.length(); i++)
//        {
//            des = des*10 + s[i] - '0';
//        }
//    }
//};
//
//struct process{
//    queue <node> que;
//};
//
//bool handle(vector <process> p, int n)
//{
//    int a[n];
//    memset(a, 0, sizeof(a));
//    int flag1 = 1, flag2 = 0;
//    while (1)
//    {
//        flag1 = 0;
//        flag2 = 0;
//        for (int i=0; i<n; i++)
//        {
//            if (p[i].que.empty())
//            {
//                flag1++;
//                continue;
//            }
//            node tmp1 = p[i].que.front();
//            if (tmp1.type == 1)
//            {
//                int k = tmp1.des;
//                if (p[k].que.empty())
//                {
//                    return false;
//                }
//                node tmp2 = p[k].que.front();
//                if (tmp2.type==0 && tmp2.des==i)
//                {
//                    flag2 = 1;
//                    p[i].que.pop();
//                    p[k].que.pop();
//                }
//            }
//            else if (tmp1.type == 0)
//            {
//                int k = tmp1.des;
//                if (p[k].que.empty())
//                {
//                    return false;
//                }
//                node tmp2 = p[k].que.front();
//                if (tmp2.type==1 && tmp2.des==i)
//                {
//                    flag2 = 1;
//                    p[i].que.pop();
//                    p[k].que.pop();
//                }
//            }
//        }
//        if (flag1 == n)
//            return true;
//        if (!flag2)
//            return false;
//    }
//    if (flag2 == -n) return true;
//    else return false;
////    while (flag1 && flag2!=-n)
////    {
////        flag1 = 0;
////        flag2 = 0;
////        for (int i=0; i<n; i++)
////        {
////            string tmp1, tmp2;
////            if (p[i].str.empty())
////            {
////                flag2--;
////                continue;
////            }
////            tmp1 = p[i].str.front();
////            if (tmp1[0] == 'S')
////            {
////                int k = tmp1[1] - '0';
////                if (p[k].str.empty())
////                {
////                    return false;
////                }
////                tmp2 = p[k].str.front();
////                if (tmp2[0]=='R' && tmp2[1]==i+'0')
////                {
////                    flag1 = 1;
////                    p[i].str.pop();
////                    p[k].str.pop();
////                }
////            }
////            else if (tmp1[0] == 'R')
////            {
////                int k = tmp1[1] - '0';
////                if (p[k].str.empty())
////                {
////                    return false;
////                }
////                tmp2 = p[k].str.front();
////                if (tmp2[0]=='S' && tmp2[1]==i+'0')
////                {
////                    flag1 = 1;
////                    p[i].str.pop();
////                    p[k].str.pop();
////                    i--;
////                }
////            }
////        }
////    }
////    if (flag2 == -n) return true;
////    else return false;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    int T, n;
//    vector <process> p;
////    memset(p, 0, sizeof(p));
//    cin >> T >> n;
//    cin.get();
//    stringstream ss;
//    for (int i=0; i<T; i++)
//    {
//        p.clear();
//        for (int j=0; j<n; j++)
//        {
//            string s;
//            process tmp;
//            getline(cin, s);
//            ss.clear();
//            ss << s;
//            while (ss >> s)
//            {
//                tmp.que.push(node(s));
//            }
//            p.push_back(tmp);
//        }
//        cout << (handle(p, n)?"0":"1") << endl;
//    }
//}