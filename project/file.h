#include <fstream>
#include <vector>
#ifndef FILE_H
#define FILE_H

using namespace std;

class File
{
public:
	File();
	void read();
	vector <string> time;
	string hours(int t);
	string minutes(int t);
	string seconds(int t);
	void write(int t);
	char type(int t);
};

#endif FILE_H
