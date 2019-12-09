/**
 * 优先使用位操作等简洁的方式完成ip地址的合并运算，可以大幅降低时间复杂度，否则超时
 * **/

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
//struct IP{
//    unsigned int ip[4], len, val;
//};
//
//struct IP norm(string str)
//{
//    IP myip;
//    int len = str.length();
//    myip.len = 0;
//    myip.val = 0;
//    for (int i=0; i<4; i++)
//    {
//        myip.ip[i] = 0;
//    }
////    memset(&myip, 0, sizeof(myip));
//    int flag = 0, j = 0;
//    for (int i=0; i<len; i++)
//    {
//        if (str[i] == '.')
//        {
//            j++;
//            continue;
//        }
//        else if (str[i] == '/')
//        {
//            flag = 1;
//            continue;
//        }
//        if (flag)
//            myip.len = myip.len*10+str[i]-'0';
//        else
//            myip.ip[j] = myip.ip[j]*10 + str[i]-'0';
//    }
//    for (int i=0; i<4; i++)
//    {
//        myip.val = myip.val*256 + myip.ip[i];
//    }
//    if (!flag) myip.len = (j+1)*8;
//    return myip;
//}
//
//bool cmp(const struct IP ip1, const struct IP ip2)
//{
//    if (ip1.val != ip2.val)
//        return ip1.val < ip2.val;
//    return ip1.len < ip2.len;
//}
//
//void union1(list<IP> &l)
//{
//    if (l.size() <= 1)
//        return;
//    list <IP>::iterator pre, after;
//    IP ip1, ip2;
//    for (pre=l.begin(), after=l.begin(), advance(after, 1); after!=l.end();)
//    {
//        ip1 = *pre;
//        ip2 = *after;
//        uint32_t al, ar, bl, br;
//        al = ip1.val;
//        ar = ip1.val | ((1<<(32-ip1.len))-1);
//        bl = ip2.val;
//        br = ip2.val | ((1<<(32-ip2.len))-1);
//        if (al<=bl && ar>=br)
//        {
//            l.erase(after);
//            after = pre;
//            after++;
//        } else{
//            pre++;
//            after++;
//        }
//    }
//}
//
//void union2(list<IP> &l)
//{
//    if (l.size() <= 1)
//        return;
//    list <IP>::iterator pre, after, lastpre;
//    IP ip1, ip2;
//    for (pre=l.begin(), after=pre, advance(after, 1); pre!=l.end();)
//    {
//        ip1 = *pre;
//        ip2 = *after;
//        if (ip1.len != ip2.len)
//        {
//            pre++;
//            after++;
//            continue;
//        }
//        uint32_t t = ip1.val^ip2.val;
//        if (t>>(32-ip1.len) == 1 || ip1.val==ip2.val)
//        {
//            ip1.len = ip1.len<=0?0:ip1.len-1;
//            pre->len = ip1.len;
//            l.erase(after);
//            if (pre != l.begin())
//                pre--;
//            after=pre;
//            after++;
//        }
//        else
//        {
//            pre++;
//            after++;
//        }
//    }
//}
//
//int main(void)
//{
//    list <IP> l;
//    int n;
//    cin >> n;
//    string str;
//    IP myip;
//    while(n--)
//    {
//        cin >> str;
//        myip = norm(str);
////        cout << myip.ip[0] << "." << myip.ip[1] << "." << myip.ip[2] << "." << myip.ip[3] << "/" << myip.len << endl;
//        l.push_back(myip);
//    }
//    l.sort(cmp);
//    union1(l);
//    union2(l);
//    for (list<IP>::iterator it=l.begin(); it!=l.end(); it++)
//    {
//        myip = *it;
//        cout << myip.ip[0] << "." << myip.ip[1] << "." << myip.ip[2] << "." << myip.ip[3] << "/" << myip.len << endl;
//    }
//}



/**超时，50分
 * **/
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
//struct IP{
//    unsigned int ip[4], len, val;
//};
//
//struct IP norm(string str)
//{
//    IP myip;
//    int len = str.length();
//    memset(&myip, 0, sizeof(myip));
//    int flag = 0, j = 0;
//    for (int i=0; i<len; i++)
//    {
//        if (str[i] == '.')
//        {
//            j++;
//            continue;
//        }
//        else if (str[i] == '/')
//        {
//            flag = 1;
//            continue;
//        }
//        if (flag)
//            myip.len = myip.len*10+str[i]-'0';
//        else
//            myip.ip[j] = myip.ip[j]*10 + str[i]-'0';
//    }
//    for (int i=0; i<4; i++)
//    {
//        myip.val = myip.val*256 + myip.ip[i];
//    }
//    if (!flag) myip.len = (j+1)*8;
//    return myip;
//}
//
//bool cmp(const struct IP ip1, const struct IP ip2)
//{
//    if (ip1.val != ip2.val)
//        return ip1.val < ip2.val;
//    return ip1.len < ip2.len;
//}
//
//void union1(list<IP> &l)
//{
//    if (l.size() <= 1)
//        return;
//    list <IP>::iterator pre, after;
//    IP ip1, ip2;
//    for (pre=l.begin(), after=l.begin(), advance(after, 1); after!=l.end();)
//    {
//        ip1 = *pre;
//        ip2 = *after;
//        if (ip1.len==ip2.len && ip1.val==ip2.val)
//        {
//            l.erase(after);
//            after = pre;
//            after++;
////            advance(after, 1);
//            continue;
//        }
//        else if (ip1.len==ip2.len && ip1.val!=ip2.val)
//        {
//            pre++;
//            after++;
////            advance(pre, 1);
////            advance(after, 1);
//            continue;
//        }
//        else if (ip1.len != ip2.len)
//        {
//            int len = 8;
//            for (int i=0; i<4; i++)
//            {
//                int flag = 0;
//                int m = ip1.ip[i];
//                int n = ip2.ip[i];
//                if (ip1.len <= len)
//                {
//                    int x=len-ip1.len;
//                    int maxn = m + pow(2, len-ip1.len) - 1;
//                    if (n>=m && n<=maxn)
//                    {
//                        l.erase(after);
//                        after = pre;
//                        after++;
////                        advance(after, 1);
//                        break;
//                    }
//                    else
//                    {
//                        pre++;
//                        after++;
////                        advance(pre, 1);
////                        advance(after, 1);
//                    }
//                }
//                else
//                {
//                    if (m != n)
//                    {
//                        flag = 1;
//                    }
//                    len += 8;
//                }
//                if (flag)
//                {
//                    pre++;
//                    after++;
////                    advance(pre, 1);
////                    advance(after, 1);
//                    break;
//                }
//            }
//        }
//    }
//}
//
//void union2(list<IP> &l)
//{
//    if (l.size() <= 1)
//        return;
//    list <IP>::iterator pre, after, lastpre;
//    IP ip1, ip2;
//    for (pre=l.begin(), after=pre, advance(after, 1); pre!=l.end();)
//    {
//        ip1 = *pre;
//        ip2 = *after;
//        if (ip1.len != ip2.len)
//        {
//            pre++;
//            after++;
////            advance(pre, 1);
////            advance(after, 1);
//            continue;
//        }
//        int len = ip1.len;
//        int t = (len-1)/8;
//        int flag = 0;
//        for (int i=0; i<t; i++)
//        {
//            if (ip1.ip[i] != ip2.ip[i])
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag)
//        {
//            pre++;
//            after++;
////            advance(pre, 1);
////            advance(after, 1);
//            continue;
//        }
//        len = 8-(len-t*8);
//        if (ip1.ip[t] == ip2.ip[t])
//        {
//            l.erase(after);
//            after = pre;
//            after++;
////            advance(after, 1);
//            continue;
//        }
//        if (ip1.ip[t]==0 && ip2.ip[t] == ip1.ip[t]+pow(2, len))
//        {
//            pre->len = pre->len>0?pre->len-1:0;
//            l.erase(after);
//            if (pre == l.begin())
//            {
//                after = pre;
//                after++;
////                advance(after, 1);
//                continue;
//            }
//            after--;
//            pre--;
//        } else
//        {
//            pre++;
//            after++;
//        }
//    }
//}
//
//int main(void)
//{
//    list <IP> l;
//    int n;
//    cin >> n;
//    string str;
//    IP myip;
//    while(n--)
//    {
//        cin >> str;
//        myip = norm(str);
////        cout << myip.ip[0] << "." << myip.ip[1] << "." << myip.ip[2] << "." << myip.ip[3] << "/" << myip.len << endl;
//        l.push_back(myip);
//    }
//    l.sort(cmp);
//    union1(l);
//    union2(l);
//    for (list<IP>::iterator it=l.begin(); it!=l.end(); it++)
//    {
//        myip = *it;
//        cout << myip.ip[0] << "." << myip.ip[1] << "." << myip.ip[2] << "." << myip.ip[3] << "/" << myip.len << endl;
//    }
//}
