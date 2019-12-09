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
////
////#define MAXM 1000
////
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
//int out(int i, int k)
//{
//    if (i%k == 0)
//        return 1;
//    if (i%10 == k)
//        return 1;
//    return 0;
//}
//
//int main(void)
//{
//    int n, k;
//    int in[1001];
//    cin >> n >> k;
//    int amount = n;
//    for (int i=0; i<1001; i++)
//        in[i] = 1;
//    for (int i=1, flag=0; amount>1; i = (i+1)%n)
//    {
//        if (i == 0) i = n;
//        if (in[i] == 0) continue;
//        flag++;
//        if (out(flag, k))
//        {
//            in[i] = 0;
//            amount--;
//        }
//    }
//    for (int i=1; i<=n; i++)
//    {
//        if (in[i])
//        {
//            cout << i;
//            break;
//        }
//    }
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//#include <mem.h>
//
//using namespace std;
//
//int demo() {
//    bool per[1005];
//    int n = 0, k = 0;
//    for (int i = 0; i < 1005; i++) per[i] = true;
//    cin >> n >> k;
//    int num = 1;
//    int cnt = n;  //记录未淘汰的人数
//    int loc = 0;
//    while (true) {
//        while (per[loc] == false)
//            { loc++;  if (loc >= n) loc = 0; }  //找第一个未被淘汰的人
//        if (num % k == 0 || num % 10 == k) {
//             per[loc] = false;    // per[loc]被淘汰
//             cnt--;                // 剩余的人数减一
//        }
//        num++;  loc++;
//        if (loc >= n)  loc = 0;
//        if (cnt == 1)  break;
//    }
//    for (int i = 0; i < n; i++) {
//        if (per[i] == true) cout << i + 1 << endl;
//    }
//    return 0;
//}
//
//int main()
//{
//    int child[1005];
////    memset((void *)child, 0, sizeof(child));
//    for (int i=0; i<1005; i++)
//        child[i] = 0;
//    int n, k;
//    cin >> n >> k;
//    int num = 0, pos = 0, amount;
//    amount = n;
//    while (amount != 1)
//    {
//        if (child[pos])
//        {
//            pos = (pos+1)%n;
//            continue;
//        }
//        num++;
//        if (num%10==k || num%k==0)
//        {
//            child[pos] = 1;//淘汰
//            amount--;
//        }
//        pos = (pos+1)%n;
//    }
//    for (int i=pos;;i=(i+1)%n)
//        if (child[i]==0)
//        {
//            pos = i;
//            break;
//        }
//    cout << pos+1;
//    demo();
//}
