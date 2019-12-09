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
//struct DISK{
//    int n;
//    string str;
//};
//
//bool cmp(DISK d1, DISK d2)
//{
//    return d1.n < d2.n;
//}
//
//
//
//int main(void)
//{
//    //提高cin、cout效率
//    ios::sync_with_stdio(false);
//    int n, s, l, m, b;
//    cin >> n >> s >> l;
//    vector <DISK> disk;
//    for (int i=0; i<l; i++)
//    {
//        DISK tmp;
//        cin >> tmp.n >> tmp.str;
//        disk.push_back(tmp);
//    }
//    sort(disk.begin(), disk.end(), cmp);
//    int block = (*disk.begin()).str.length();
//    block = block/8*(n-1);
//    cin >> m;
//    for (int i=0; i<m; i++)
//    {
//        cin >> b;
//        if (b > block)
//        {
//            cout << "-" << endl;
//            continue;
//        }
//        int tiaodai = b/s;
//        int k = tiaodai/(n-1);
//        int j = tiaodai%(n-1);//一行的第几个条带
//        int z = b%s;    //块在条带上的相对位置
//        int pos = n-1;
//        pos = n-1-(k%(n-1));
//        pos = (pos+j+1)%n;
//        int flag = 0;
//        for (vector<DISK>::iterator it=disk.begin(); it!=disk.end(); it++)
//        {
//            if (it->n == pos)
//            {
//                flag = 1;
//                string re = it->str.substr(k*s*8+z*8, 8);
//                cout << re << endl;
//                break;
//            }
//        }
//        if (!flag)
//        {
//            if (l < n-1)
//            {
//                cout << "-" << endl;
//            }
//            else
//            {
//                string re = "00000000";
//                for (vector<DISK>::iterator it=disk.begin(); it!=disk.end(); it++)
//                {
//                    string tmp = it->str.substr(k*s*8+z*8, 8);
//                    for (int x=0; x<8; x++)
//                    {
//                        int a, b;
//                        if (re[x]>='0' && re[x]<='9') a = re[x]-'0';
//                        else a = re[x]-'A';
//                        if (tmp[x]>='0' && tmp[x]<='9') b = tmp[x]-'0';
//                        else b = tmp[x]-'A'+10;
//                        a = a^b;
//                        if (a<10)
//                            re[x] = a+'0';
//                        else
//                            re[x] = a+'A'-10;
//                    }
//                }
//                cout << re << endl;
//            }
//        }
//    }
//}


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
//struct DISK{
//    int n;
//    string str;
//};
//
//bool cmp(DISK d1, DISK d2)
//{
//    return d1.n < d2.n;
//}
//
//int main(void)
//{
//    int n, s, l, m, b;
//    cin >> n >> s >> l;
//    vector <DISK> disk;
//    for (int i=0; i<l; i++)
//    {
//        DISK tmp;
//        cin >> tmp.n >> tmp.str;
//        disk.push_back(tmp);
//    }
//    sort(disk.begin(), disk.end(), cmp);
//    int block = (*disk.begin()).str.length();
//    block = block/8*(n-1);
//    cin >> m;
//    for (int i=0; i<m; i++)
//    {
//        cin >> b;
//        if (b > block)
//        {
//            cout << "-" << endl;
//            continue;
//        }
//        int tiaodai = b/s;
//        int k = tiaodai/(n-1);
//        int j = tiaodai%(n-1);//一行的第几个条带
//        int z = b%s;    //块在条带上的相对位置
//        int pos = n-1;
//        pos = n-1-(k%(n-1));
//        pos = (pos+j+1)%n;
//        int flag = 0;
//        for (vector<DISK>::iterator it=disk.begin(); it!=disk.end(); it++)
//        {
//            if (it->n == pos)
//            {
//                flag = 1;
//                string re = it->str.substr(k*s*8+z*8, 8);
//                cout << re << endl;
//                break;
//            }
//        }
//        if (!flag)
//        {
//            if (l < n-1)
//            {
//                cout << "-" << endl;
//            }
//            else
//            {
//                string re = "00000000";
//                for (vector<DISK>::iterator it=disk.begin(); it!=disk.end(); it++)
//                {
//                    string tmp = it->str.substr(k*s*8+z*8, 8);
//                    for (int x=0; x<8; x++)
//                    {
//                        int a, b;
//                        if (re[x]>='0' && re[x]<='9') a = re[x]-'0';
//                        else a = re[x]-'A';
//                        if (tmp[x]>='0' && tmp[x]<='9') b = tmp[x]-'0';
//                        else b = tmp[x]-'A'+10;
//                        a = a^b;
//                        if (a<10)
//                            re[x] = a+'0';
//                        else
//                            re[x] = a+'A'-10;
//                    }
//                }
//                cout << re << endl;
//            }
//        }
//    }
//}