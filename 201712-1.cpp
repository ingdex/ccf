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
//int main(void)
//{
//    int n, num[1000];
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        cin >> num[i];
//    }
//    int min = INT_MAX;
//    for (int i=0; i<n-1; i++)
//    {
//        for (int j=i+1; j<n; j++)
//        {
//            int x = abs(num[i]-num[j]);
//            min = x<min?x:min;
//        }
//    }
//    cout << min << endl;
//}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    int num[1000];
//    int n, minc;
//    minc = INT_MAX;
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        cin >> num[i];
//    }
//    for (int i=0; i<n; i++)
//    {
//        for (int j=i+1; j<n; j++)
//        {
//            int c = abs(num[i]-num[j]);
//            minc = min(minc, c);
//        }
//    }
//    cout << minc;
//}
