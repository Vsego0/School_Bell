#include <iostream>
#include <vector>
#include "file.h"
#include "signal.h"

using namespace std;

int main()
{
    setlocale(0, "");
    Signal signal;
    File file;
    file.read();
    int action, size = file.time.size();
    bool h = true;
    while (h)
    {
        cout << "Вывести расписание: 1\tПереписать расписание: 2\tЗапустить проигрывание звонков: 3\n";
        cin >> action;
        switch (action)
        {
        case 1:
            file.read();
            for (int i = 0; i < size; i++)
            {
                cout << file.hours(i) << ":" << file.minutes(i) << ":" << file.seconds(i) << "#" << file.type(i) << endl;
            }
            break;
        case 2:
            file.time.clear();
            cout << "Введите количество новых таймигов\n";
            cin >> size;
            file.write(size);
            break;
        case 3:
            h = false;
            break;
        }
    }    
    cout << "signal on\n";
    signal.on();
    return 0;
}