#include <iostream>
#include <Windows.h>
#include "music.h"

Music::Music() {};

void Music::play1()
{
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(329, 500);
    Beep(247, 500);
    Beep(247, 500);
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(497, 500);
    Beep(417, 500);
    Sleep(500);
    Beep(497, 500);
    Beep(277, 500);
    Beep(277, 500);
    Beep(440, 500);
    Beep(440, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(329, 500);
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(329, 500);
};

void Music::play2()
{
    int a = 750;

    Beep(392, a);
    Beep(392, a);
    Beep(392, a);
    Beep(311, a * 0.75);
    Beep(466, a * 0.25);

    Beep(392, a);
    Beep(311, a * 0.75);
    Beep(466, a * 0.25);
    Beep(392, a * 2);

    Beep(587, a);
    Beep(587, a);
    Beep(587, a);
    Beep(622, a * 0.75);
    Beep(466, a * 0.25);

    Beep(369, a);
    Beep(311, a * 0.75);
    Beep(466, a * 0.25);
    Beep(392, a * 2);
}

void Music::play3()
{
    Beep(659.26, 200);
    Beep(659.26, 200);
    Sleep(200);
    Beep(659.26, 200);
    Sleep(100);
    Beep(523.26, 200);
    Beep(659.26, 200);
    Sleep(200);
    Beep(783.98, 200);
    Sleep(400);
    Beep(391.99, 200);
}