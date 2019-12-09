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
//int main(void)
//{
//    int L1, L2, L3, L4, L5, L6, L7, L8;
//    L1 = 3500;
//    L2 = L1+1500*(1-0.03);
//    L3 = L2+(4500-1500)*(1-0.1);
//    L4 = L3+(9000-4500)*(1-0.2);
//    L5 = L4+(35000-9000)*(1-0.25);
//    L6 = L5+(55000-35000)*(1-0.3);
//    L7 = L6+(80000-55000)*(1-0.35);
//    float x, re;
//    cin >> x;
//    if (x > L7)
//    {
//        re = (x-L7)/(1-0.45)+3500+80000;
//    }
//    else if (x > L6)
//    {
//        re = (x-L6)/(1-0.35)+3500+55000;
//    }
//    else if (x > L5)
//    {
//        re = (x-L5)/(1-0.3)+3500+35000;
//    }
//    else if (x > L4)
//    {
//        re = (x-L4)/(1-0.25)+3500+9000;
//    }
//    else if (x > L3)
//    {
//        re = (x-L3)/(1-0.2)+3500+4500;
//    }
//    else if (x > L2)
//    {
//        re = (x-L2)/(1-0.1)+3500+1500;
//    }
//    else if (x > L1)
//    {
//        re = (x-L1)/(1-0.03)+3500;
//    }
//    else
//    {
//        re = x;
//    }
//    cout << re;
//}
