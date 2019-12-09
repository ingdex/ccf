//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int n, m;
//string key, str;
//int state;//0:获取键，1:获取值
//map<string, string> json;
//
//string handle(string key, string str)
//{
//	if (str.empty())
//        return key;
//    for (size_t i=0; i<str.size(); i++)
//    {
//        if (str[i] == ' ' || str[i] == '\n')
//            continue;
//        if (str[i] == '{')
//        {
//            if (key == "")
//            {
//                state = 0;
//            }
//            else
//            {
//                json[key] = "OBJECT";
//                state = 0;
//            }
//        }
//        else if (str[i] == '"')
//        {
//            string value;
//            for (i++; i<str.size(); i++)
//            {
//                if (str[i] == '\\')
//                    value += str[++i];
//                else if (str[i] == '"')
//                {
//                    break;
//                }
//                else
//                    value += str[i];
//            }
//            if (state == 0)
//            {
//                if (key == "") key = value;
//                else key = key + "." + value;
//            }
//            else
//            {
//                json[key] = "STRING " + value;
//                for (int j=key.size(); j>=0; j--)
//                {
//                    if (key[j] == '.')
//                    {
//                        key = key.substr(0, j);
//                        break;
//                    }
//                    else if (j == 0)
//                    {
//                        key.clear();
//                    }
//                }
//            }
//        }
//        else if (str[i] == ':')
//        {
//            state = 1;
//        }
//        else if (str[i] == ',')
//        {
//            state = 0;
//        }
//        else if (str[i] == '}')
//        {
//            state = 0;
//            for (int j=key.size(); j>=0; j--)
//            {
//                if (key[j] == '.')
//                {
//                    key = key.substr(0, j);
//                    break;
//                }
//                else if (j == 0)
//                {
//                    key.clear();
//                }
//            }
//        }
//    }
//    return key;
//}
//
//int main()
//{
//	cin >> n >> m;
//	cin.get();
//	while (n--)
//	{
//		getline(cin, str);
//		key = handle(key, str);
//	}
//	while (m--)
//	{
//		cin >> str;
//		cout << (json[str] == "" ? "NOTEXIST" : json[str]) << endl;
//	}
//	return 0;
//}
//
/////**超时
////#include <iostream>
////#include <string>
////#include <cstring>
////#include <vector>
////#include <stdio.h>
////#include <queue>
////#include <algorithm>
////#include <list>
////#include <fstream>
////#include <cstdlib>
////#include <map>
////
////#define MAXM 1000
////
////using namespace std;
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
////map <string, string> json;
////
////int solve(string key, string in)
////{
////    for (size_t i=0; i<in.size(); i++)
////    {
////        string kstr, vstr;
////        int flag = 0;
////        char c = in[i];
////        if (in[i] == '"')
////        {
////            for (i++; in[i]!='"'; i++)
////            {
////                if (in[i] == '\\')
////                {
////                    kstr += in[++i];
////                }
////                else
////                {
////                    kstr += in[i];
////                }
////            }
////            i++;
////            if (key.size() > 0)
////            {
////                key = key + "." + kstr;
////                flag = 1;
////            }
////            else
////                key = kstr;
////            while (in[i]!='{' && in[i]!='"' && i<in.size())
////                i++;
////            if (in[i] == '{')
////            {
////                json[key] = "OBJECT";
////                i = i + solve(key, in.substr(i, in.size()));
////                if (flag)
////                {
////                    key = key.substr(0, key.size()-kstr.size()-1);
////                }
////                else
////                {
////                    key.clear();
////                }
////                continue;
////            }
////            else    //in[i] == '"'
////            {
////                for (i++; in[i]!='"'; i++)
////                {
////                    if (in[i] == '\\')
////                        vstr += in[++i];
////                    else
////                        vstr += in[i];
////                }
////                json[key] = "STRING " + vstr;
//////                cout << "test" << json[key] << endl;
////                i++;
////                while (in[i]!=',' && in[i]!='}' && i<in.size())
////                    i++;
////                if (in[i] == ',')
////                {
////                    if (flag)
////                    {
////                        key = key.substr(0, key.size()-kstr.size()-1);
////                    }
////                    else
////                    {
////                        key.clear();
////                    }
////                }
////                else if (in[i] == '}')
////                {
////                    c = in[i+1];
////                    return i+1;
////                }
////            }
////        }
////        else
////        {
////            continue;
////        }
////    }
////    return 0;
////}
////
////int main(void)
////{
////    int m, n;
////    cin >> n >> m;
////    cin.get();
////    string key, str, in;
////    while (n--)
////    {
////        getline(cin, str);
////        in += str;
////    }
////    solve("", in);
////    for (int i=0; i<m; i++)
////    {
////        cin >> key;
////        cout << (json[key]==""?"NOTEXIST":json[key]) << endl;
////    }
////}
//
