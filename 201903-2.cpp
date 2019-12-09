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
//int main(void)
//{
//    string str;
//    vector <int > st;
//    int n;
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        cin >> str;
//        for (int j=0; j<7; j++)
//        {
//            if (str[j] == 'x' || str[j] == '/')
//            {
//                int a = st.back() - '0';
//                int b = str[j+1] - '0';
//                st.pop_back();
//                if (str[j] == 'x')
//                    st.push_back(a*b+'0');
//                else
//                    st.push_back(a/b+'0');
//                j++;
//            }
//            else
//                st.push_back(str[j]);
//        }
//        int re = *st.begin() - '0';
//        st.erase(st.begin());
//        while (!st.empty())
//        {
//            int x = *st.begin();
//            st.erase(st.begin());
//            int y = *st.begin() - '0';
//            st.erase(st.begin());
//            if (x == '+')
//                re += y;
//            else
//                re -= y;
//        }
//        if (re == 24)
//            cout << "Yes" << endl;
//        else
//            cout << "No" << endl;
//    }
//
//}