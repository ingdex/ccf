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
//#define MAXM 1001
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
//struct KEY {
//    int id, time, flag;
//};
//
//bool com(KEY k1, KEY k2)
//{
//    if (k1.time != k2.time) return k1.time < k2.time;
//    if (k1.flag != k2.flag) return k1.flag < k2.flag;
//    return k1.id < k2.id;
//}
//
//int main(void)
//{
//    vector<KEY> mykey;
//    int n, k;
//    int shunxv[MAXM];
//    for (int i=0; i<MAXM; i++)
//    {
//        shunxv[i] = i+1;
//    }
//    cin >> n >> k;
//    for (int i=0; i<k; i++)
//    {
//        int w, s, c;
//        KEY tmp;
//        cin >> w >> s >> c;
//        //取操作
//        tmp.id = w;
//        tmp.flag = 1;
//        tmp.time = s;
//        mykey.push_back(tmp);
//        //还操作
//        tmp.id = w;
//        tmp.flag = 0;
//        tmp.time = s+c;
//        mykey.push_back(tmp);
//    }
//    sort(mykey.begin(), mykey.end(), com);
//    for (int i=0; i<2*k; i++)
//    {
//        KEY tmp = mykey.at(i);
//        if (tmp.flag == 0)
//        {
//            for (int i=0; i<n; i++)
//            {
//                if (shunxv[i] == 0)
//                {
//                    shunxv[i] = tmp.id;
//                    break;
//                }
//            }
//        }
//        else
//        {
//            for (int i=0; i<n; i++)
//            {
//                if (shunxv[i] == tmp.id)
//                {
//                    shunxv[i] = 0;
//                    break;
//                }
//            }
//        }
//    }
//    for (int i=0; i<n; i++)
//    {
//        cout << shunxv[i] << " ";
//    }
//}
