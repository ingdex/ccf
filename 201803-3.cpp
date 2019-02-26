#include <iostream>
#include <string>

using namespace std;

int is_int(string str)
{
    int i;
    for (i=0; i<str.length(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
    }
    return 1;
}

int match(string rule, string name, string url)
{
    int flag = 1, final = 0;
    int rpos1, rpos2, upos1, upos2;
    string str1, str2;
    string re;
    rpos1 = rule.find('/');
    upos1 = url.find('/');
    rpos2 = rule.find('/', rpos1+1);
    upos2 = url.find('/', upos1+1);
    str1 = rule.substr(rpos1+1, rpos2-rpos1-1);
    str2 = url.substr(upos1+1, upos2-upos1-1);
    while (flag)
    {
        if (str1 == "<str>")
        {
            if (str2 == "")
            {
                return 0;
            }
            re = re + " " + str2;
        }
        else if (str1 == "<int>")
        {
            if (!is_int(str2))
            {
                return 0;
            }
            while (str2.find('0') == 0)
            {
                str2 = str2.substr(1);
            }
            re = re + " " + str2;
        }
        else if (str1 == "<path>")
        {
            if(str2 == "")
            {
                return 0;
            }
            str2 = url.substr(upos1+1);
            re = re + " " + str2;
            re = name + re;
            cout << re << endl;
            return 1;
        }
        else if (str1 != str2)
        {
            flag = 0;
        }
        rpos1 = rpos2;
        upos1 = upos2;
        if (final || rpos1 == (rule.length()-1) || upos1 == (url.length()-1))
        {
            break;
        }
        rpos2 = rule.find('/', rpos1+1);
        upos2 = url.find('/', upos1+1);
        if (rpos2 == -1)
        {
            str1 = rule.substr(rpos1+1);
            if (upos2 == -1)
            {
                str2 = url.substr(upos1+1);
            }
            else
            {
                str2 = url.substr(upos1+1, upos2-upos1-1);
            }
            final = 1;
            continue;
        }
        if (upos2 == -1)
        {
            str2 = url.substr(upos1+1);
            final = 1;
            continue;
        }
        str1 = rule.substr(rpos1+1, rpos2-rpos1-1);
        str2 = url.substr(upos1+1, upos2-upos1-1);
    }
    if (rpos1 == rule.length()-1 && upos1 == url.length()-1 && flag)
    {
        re = name + re;
        cout << re << endl;
        return 1;
    }


    return 0;
}

int main() {
    int n, m;
    int find;
    cin >> n >> m;
    string rule[n], name[n];
    string url[m];
    for (int i=0; i<n; i++)
    {
        cin >> rule[i] >> name[i];
    }
    for (int i=0; i<m; i++)
    {
        cin >> url[i];
    }
    for (int i=0; i<m; i++)
    {
        find = 0;
        for (int j=0; j<n; j++)
        {
            if (match(rule[j], name[j], url[i]))
            {
                find = 1;
                break;
            }
        }
        if (!find) cout << "404" << endl;
    }

    return 0;
}