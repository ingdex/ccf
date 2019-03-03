#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>

using namespace std;

string getTag(string str)
{
	while (str[0] == '.')
	{
		str = str.substr(1);
	}
	int pos = str.find(' ');
	if (pos == -1)
	{
		return str.substr(0);
	}
	else
	{
		return str.substr(0, pos);
	}
}

string getId(string str)
{
	int pos1 = 0;
	pos1 = str.find('#');
	if (pos1 == -1)
		return string("");
	return str.substr(pos1);
}

int getLevel(string str)
{
	int count = 0;
	while (str[count] == '.')
	{
		count++;
	}

	return count / 2;
}

int myFind(vector <string> document, vector <string> str, int startLine, int goalNum)
{
	if (goalNum >= str.size())
	{
		return startLine;
	}
	int i = 0;
	string tag, id;
	string startStr = document[startLine];
	string curStr = "";
	string goalStr = str[goalNum];
	int startLevel = getLevel(startStr);    //祖先等级
	int curLevel = 0;
	if (goalStr[0] == '#')   //select id
	{
		if (str.size() == 1)	//只查找一个时不能重复选中一个
		{
			i = startLine + 1;
		}
		else if (goalNum > 0)
		{
			if (str[goalNum - 1] == str[goalNum])	//防止div div p重复选中
			{
				i = startLine + 1;
			}
			else
			{
				i = startLine;
			}
		}
		else
		{
			i = startLine;
		}
		for (; i < document.size(); i++)
		{
			curStr = document[i];
			curLevel = getLevel(curStr);
			if (curLevel < startLevel)
			{
				return 0;
			}
			if (goalStr == getId(curStr))
			{
				return myFind(document, str, i, goalNum + 1);
			}
		}
	}
	else    //select tag
	{
		if (str.size() == 1)	//只查找一个时不能重复选中一个
		{
			i = startLine + 1;
		}
		else if (goalNum > 0)
		{
			if (str[goalNum - 1] == str[goalNum])	//防止div div p重复选中
			{
				i = startLine + 1;
			}
			else
			{
				i = startLine;
			}
		}
		else
		{
			i = startLine;
		}
		for (; i < document.size(); i++)
		{
			curStr = document[i];
			curLevel = getLevel(curStr);
			if (curLevel < startLevel)
			{
				return 0;
			}
			if (goalStr == getTag(curStr))
			{
				return myFind(document, str, i, goalNum + 1);
			}
		}
	}
	return 0;
}

void select(vector <string> document, string selector)
{
	vector <string> str;    //选择器数组
	vector <int> number;    //行号数组
	int x = 0;
	int pos1 = 0, pos2 = 0;     //pos1:选择器开始下标 pos2:选择器后紧接着的空格下标
	while (1)
	{
		pos2 = selector.find(' ', pos1 + 1);
		if (pos2 == -1)
		{
			str.push_back(selector.substr(pos1));
			break;
		}
		str.push_back(selector.substr(pos1, pos2 - pos1));
		pos1 = pos2 + 1;
	}
	int line = 1;
	number.clear();
	
	if (str.size() == 1)
	{
		string key = str[0];	//最后一个选择器
		string tag, id;
		for (int i = 1; i < document.size(); i++)
		{
			if (key[0] == '#')	//不存在同id
			{
				id = getId(document[i]);
				if (id == key)
				{
					number.push_back(i);
					break;
				}
			}
			else
			{
				tag = getTag(document[i]);
				if (tag == key)
				{
					number.push_back(i);
				}
			}
		}
	}
	else
	{
		int end = 0;
		while (line && !end)
		{
			line = myFind(document, str, line, 0);
			if (line)
			{
				number.push_back(line);
				//贪心
				int level1 = getLevel(document[line]);
				if (line < document.size() - 1)
				{
					line++;
					int level2 = getLevel(document[line]);
					string key = str[str.size() - 1];	//最后一个选择器
					string tag, id;

					while (level2 >= level1)
					{
						if (key[0] == '#')	//不存在同id
						{
							break;
						}
						else
						{
							tag = getTag(document[line]);
							if (tag == key)
							{
								number.push_back(line);
							}
							line++;
							if (line == document.size())
							{
								end = 1;
								break;
							}
							level2 = getLevel(document[line]);
						}
					}
				}

			}
		}
		
	}
	
			
	cout << number.size();
	for (int i = 0; i < number.size(); i++)
	{
		cout << " " << number[i];
	}
	cout << endl;

}

int main() {
	int n, m;
	int i;
	std::string name;
	vector <string> document;
	vector <string> selector;
	cin >> n >> m;
	selector.resize(m);
	document.push_back("ignore");
	document.resize(n + 1);
	getchar();
	for (i = 1; i < n + 1; i++)
	{
		getline(cin, document[i]);
		name = document[i];
	}
	for (i = 0; i < m; i++)
	{
		getline(cin, selector[i]);
		name = selector[i];
	}
	for (i = 0; i < m; i++)
	{
		select(document, selector[i]);
	}
	return 0;
}
