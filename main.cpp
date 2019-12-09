/*demo*/

/*


#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <fstream>
#include <cstdlib>
#include <map>
#include <sstream>
#include <cmath>

//#define MAXN 1000

using namespace std;
vector <string> mysplit(string str, const char *delim);
char *myitoa(int n);
int myatoi(char * c);

struct node{

} Node;
//const int MAXV = 2010;
//const int INF = 1000000000;

int main(void)
{
    //提高cin、cout效率
    //ios::sync_with_stdio(false);

}

vector <string> mysplit(string str, const char *delim)
{
    vector <string> result;
    int len = str.size();
    char input[len+1];
    strcpy(input, str.c_str());
    char *token = strtok(input, delim);
    while (token != NULL)
    {
        result.push_back(string(token));
        token = strtok(NULL, delim);
    }
    return result;
}

char *myitoa(int n)
{
    stringstream ss;
    string s;
    ss << n;
    ss >> s;
    int len = strlen(s.c_str());
    char *c_str = (char *)malloc(len+1);
    strcpy(c_str, s.c_str());
    return c_str;
}

int myatoi(char * c)
{
    int n;
    string s = c;
    istringstream is(s);
    is >> n;
    return n;
}


*/















//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <stdio.h>
//#include <queue>
//#include <algorithm>
//#include <list>
//#include <fstream>
////
////#define MAXM 1000
////
//using namespace std;
////
////vector <string> split(string str, const char *delim)
////{
////    vector <string> result;
////    int len = str.size();
////    char input[len+1];
////    strcpy(input, str.c_str());
////    char *token = strtok(input, delim);
////    while (token != NULL)
////    {
////        result.push_back(string(token));
////        token = strtok(NULL, delim);
////    }
////    return result;
////}
////
////int stoi(string str)
////{
////    int result = 0;
////    for (int i=0; i<str.size(); i++)
////    {
////        result
////    }
////}
////
////struct IP
////{
////    long long value;
////    int len;
////};
////
////IP stdIP(string ipStr)
////{
////    IP result;
////    int num1 = count(ipStr.begin(), ipStr.end(), '.');
////    int num2 = count(ipStr.begin(), ipStr.end(), '/');
////    if (num1 == 3 && num2 == 1)
////    {
////        //标准
////        vector <string> s1 = split(ipStr, ".");
////        vector <string> s2 = split(s1[3], "/");
////        int a0 = stoi(s1[0]);
////        int a1 = stoi(s1[1]);
////        int a2 = stoi(s1[2]);
////        int a3 = stoi(s2[0]);
////        int len = stoi(s2[1]);
////        result.value = a0*256*256*256 + a1*256*256 + a2*256 + a3;
////        result.len = len;
////    }
////    else if (num2 < 3 && num2 != 0)
////    {
////        //省略后缀
////        vector <string> s1 = split(ipStr, ".");
////        vector <string> s2;
////        if (num2 == 2)
////        {
////            s2 = split(s1[2], "/");
////            int a0 = stoi(s1[0]);
////            int a1 = stoi(s1[1]);
////            int a2 = stoi(s2[0]);
////            int len = stoi(s2[1]);
////            result.value = a0*256*256*256 + a1*256*256 + a2*256;
////            result.len = len;
////        }
////        else if (num2 == 1)
////        {
////            s2 = split(s1[1], "/");
////            int a0 = stoi(s1[0]);
////            int a1 = stoi(s2[0]);
////            int len = stoi(s2[1]);
////            result.value = a0*256*256*256 + a1*256*256;
////            result.len = len;
////        }
////        else
////        {
////            s2 = split(s1[0], "/");
////            int a0 = stoi(s2[0]);
////            int len = stoi(s2[1]);
////            result.value = a0*256*256*256;
////            result.len = len;
////        }
////    }
////    else
////    {
////        //省略长度
////        vector <string> s1 = split(ipStr, ".");
////        int a0, a1, a2, a3;
////        switch (num1)
////        {
////        case 0:
////            a0 = stoi(s1[0]);
////            result.value = a0*256*256*256;
////            result.len = 8;
////            break;
////        case 1:
////            a0 = stoi(s1[0]);
////            a1 = stoi(s1[1]);
////            result.value = a0*256*256*256 + a1*256*256;
////            result.len = 16;
////            break;
////            break;
////        case 2:
////            a0 = stoi(s1[0]);
////            a1 = stoi(s1[1]);
////            a2 = stoi(s1[2]);
////            result.value = a0*256*256*256 + a1*256*256 + a2*256;
////            result.len = 24;
////            break;
////        case 3:
////            a0 = stoi(s1[0]);
////            a1 = stoi(s1[1]);
////            a2 = stoi(s1[2]);
////            a3 = stoi(s1[3]);
////            result.value = a0*256*256*256 + a1*256*256 + a2*256 + a1;
////            result.len = 32;
////            break;
////        default:
////            break;
////        }
////    }
////    return result;
////}
////
////bool ipCompare(IP ip1, IP ip2)
////{
////    if (ip1.value < ip2.value)
////    {
////        return true;
////    }
////    else if (ip1.value == ip2.value)
////    {
////        return ip1.len < ip2.len;
////    }
////    else
////    {
////        return false;
////    }
////}
////
////int main()
////{
////    fstream f("./output");
////    for (int i=0; i<1024; i++)
////    {
////        cout << "00000000" << endl;
////    }
////    return 0;
////    int n;
////    cin >> n;
////    list <IP> ip;
////    IP ipIn;
////    string ipStr;
////    ip.resize(n);
////    for (int i=0; i<n; i++)
////    {
////        cin >> ipStr;
////        ipIn = stdIP(ipStr);
////        ip.push_back(ipIn);
////    }
////    ip.sort(ip.begin(), ip.end(), ipCompare());
////
////
////
////
////    for (list <IP>::iterator iter=ip.begin(); iter!=ip.end(); iter++)
////    {
////        cout << iter->value/(256*256*256) << '.'
////            << (iter->value%(256*256*256))/(256*256) << '.'
////            << (iter->value%(256*256))/(256) << '.'
////            << (iter->value%(256)) << '/'
////            << iter->len << endl;
////    }
////    cout <<  endl;
////
////    return 0;
////}
//int main()
//{
//    fstream f("./output.txt");
//    if (!f.is_open())
//        return -1;
//    for (int i=0; i<512; i++)
//    {
//        f << "00000000" << endl;
//    }
//    return 0;
//
//}
