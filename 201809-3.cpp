///** 标签不区别大小写，因此结构化文档和选择中都需要将标签转换为小写**/
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
//vector <string> mysplit(string str, const char *delim);
//char *myitoa(int n);
//int myatoi(char * c);
//
//struct node{
//    string type, id;
//    int layer;
//} Node[110];
////const int MAXV = 2010;
////const int INF = 1000000000;
//
//int n, m;
//
//bool search(int &st, int &layer, string s)
//{
//    for (int i=st; i>=0; i--)
//    {
//        if (Node[i].layer<layer)
//        {
//            layer = Node[i].layer;
//            st = i;
//            if (Node[i].type==s || Node[i].id==s)
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main(void)
//{
//    //提高cin、cout效率
//    //ios::sync_with_stdio(false);
//    cin >> n >> m;
//    cin.get();
//    for (int i=0; i<n; i++)
//    {
//        string line;
//        getline(cin, line);
//        int layer = 0;
//        int j = 0;
//        for (j=0; j<line.size(); j++)
//        {
//            if (line[j] == '.')
//            {
//                j++;
//                layer++;
//            } else break;
//        }
//        line = line.substr(j);
//        stringstream ss;
//        ss << line;
//        string type, id;
//        ss >> type;
//        if (line.find('#') != string::npos)
//        {
//            ss >> id;
//        }
//        else
//        {
//            id = "";
//        }
//        transform(type.begin(), type.end(), type.begin(), ::tolower);
//        Node[i].type = type;
//        Node[i].id = id;
//        Node[i].layer = layer;
//    }
//    for (int i=0; i<m; i++)
//    {
//        string line;
//        getline(cin, line);
//        vector <string> str = mysplit(line, " ");
//        vector <int > ans;
//        for (int i=0; i<str.size(); i++)
//        {
//            if (str[i][0] != '#')
//                transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
//        }
//        int len = str.size();
//        for (int j=0; j<n; j++)
//        {
//            if (str[len-1]==Node[j].type || str[len-1]==Node[j].id)
//            {
//                int st = j, layer = Node[j].layer, k=len-2;
//                for (; k>=0; k--)
//                {
//                    if (!search(st, layer, str[k]))
//                        break;
//                }
//                if (k<0)
//                {
//                    ans.push_back(j);
//                }
//            }
//        }
//        cout << ans.size() << " ";
//        for (int i=0; i<ans.size(); i++)
//        {
//            cout << ans[i]+1 << " ";
//        }
//        cout << endl;
//    }
//
//}
//
//vector <string> mysplit(string str, const char *delim)
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
//
//string myToLower(string str)
//{
//    for (int i=0; i<str.length(); i++)
//    {
//        str[i] = tolower(str[i]);
//    }
//}
//
//string myToUpper(string str)
//{
//    for (int i=0; i<str.length(); i++)
//    {
//        str[i] = toupper(str[i]);
//    }
//}