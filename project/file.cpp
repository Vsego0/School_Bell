#include "file.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

File::File(){}

string File::hours(int t)
{
	string x = time[t].substr(0, 2);
	return x;
}

string File::minutes(int t)
{
	string x = time[t].substr(3, 2);
	return x;
}

string File::seconds(int t)
{
	string x = time[t].substr(6, 2);
	return x;
}

void File::write(int t)
{
	ofstream fout("расписание.txt");
	string str = "";
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		if (i == t - 1)
		{
			fout << str;
			break;
		}
		fout << str << endl;
	}
	fout.close();
}

char File::type(int t)
{
	char x = time[t][9];
	return x;
}

void File::read()
{
	time.clear();
	ifstream fin("расписание.txt");
	string s;
	while(!fin.eof())
	{
		getline(fin, s);
		time.push_back(s);
	}
	fin.close();
}