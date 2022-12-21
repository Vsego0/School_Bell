#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include <vector>
#include "music.h"
#include "file.h"
#include "signal.h"

using namespace std;

Signal::Signal() {};

void Signal::on()
{
    Music music;
    File table;
    vector <string> x;
    string y[3];
    string buff;
    int t = 0, k = 0;
    table.read();

    for (int i = 0; i < table.time.size(); i++)
    {
        x.push_back(table.hours(i));
        x.push_back(table.minutes(i));
        x.push_back(table.seconds(i));
    }

    while (true)
    {
        Sleep(500);
        time_t now = time(0);
        tm* ltm = localtime(&now);
        y[0] = to_string(ltm->tm_hour);

        if (y[0].size() != 2)
        {
            buff = y[0];
            y[0][0] = '0';
            y[0] += buff;
        }

        y[1] = to_string(ltm->tm_min);

        if (y[1].size() != 2)
        {
            buff = y[1];
            y[1][0] = '0';
            y[1] += buff;
        }

        y[2] = to_string(ltm->tm_sec);

        if (y[2].size() != 2)
        {
            buff = y[2];
            y[2][0] = '0';
            y[2] += buff;
        }

        if (x[t] == y[0] && x[t + 1] == y[1] && x[t + 2] == y[2])
        {
            switch (table.type(k))
            {
            case '1':
                cout << "signal 1\n";
                music.play1();
                break;
            case '2':
                cout << "signal 2\n";
                music.play2();
                break;
            case '3':
                cout << "signal 3\n";
                music.play3();
                break;
            }
            k++;
            t += 3;
        }

        if (k == table.time.size())
        {
            k = 0;
            t = 0;
        }
    }
}