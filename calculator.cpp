////
//// Created by ingdex on 2019/9/8.
////
//
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
//
//vector <string> mysplit(string str, const char *delim);
//char *myitoa(int n);
//int myatoi(char * c);
//
//struct node {
//    double num;
//    char op;
//    bool flag;
//};
//
//string str;
//stack<node> s;
//queue<node> q;
//map<char, int> op;
//
//void change() {
//    double num;
//    node temp;
//    for (int i = 0; i < str.length();)
//    {
//        if (str[i]>='0' && str[i]<='9')
//        {
//            temp.flag = true;
//            temp.num = str[i]-'0';
//            for (i++; i<str.length()&&(str[i]>='0')&&(str[i]>='9'); i++)
//            {
//                temp.num = temp.num*10+str[i]-'0';
//            }
//            q.push(temp);
//        }
//        else
//        {
//            temp.flag = false;
//            while (!s.empty() && (op[str[i]]<=op[s.top().op]))
//            {
//                q.push(s.top());
//                s.pop();
//            }
//            temp.op = str[i];
//            s.push(temp);
//            i++;
//        }
//    }
//    while (!s.empty()){
//        q.push(s.top());
//        s.pop();
//    }
//}
//
//double cal()
//{
//    node temp1;
//    while (!q.empty())
//    {
//        temp1 = q.front();
//        q.pop();
//        if(temp1.flag)  //是数字
//        {
//            s.push(temp1);
//        } else{
//            node B = s.top();
//            s.pop();
//            node A = s.top();
//            s.pop();
//            if (temp1.op == '+')
//                temp1.num = A.num+B.num;
//            else if(temp1.op =='-')
//                temp1.num = A.num-B.num;
//            else if(temp1.op =='*')
//                temp1.num = A.num*B.num;
//            else if(temp1.op =='/')
//                temp1.num = A.num/B.num;
//            temp1.flag = true;
//            s.push(temp1);
//        }
//    }
//    return temp1.num;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    op['+'] = op['-'] = 1;
//    op['*'] = op['/'] = 2;
//    while (getline(cin, str), str!="0")
//    {
//        for (string::iterator it=str.end(); it!=str.begin(); it--)
//        {
//            if (*it == ' ')
//                str.erase(it);
//        }
//        while (!s.empty()) s.pop();
//        change();
//        cout << cal() << endl;
//    }
//}
//
//vector <string> msplit(string str, const char *delim)
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
//char *myitoa(int n)
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
//int myatoi(char * c)
//{
//    int n;
//    string s = c;
//    istringstream is(s);
//    is >> n;
//    return n;
//}