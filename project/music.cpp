#include <iostream>
#include "windows.h"
#include "music.h"
#include "audiere.h"
#include <conio.h>

Music::Music() {};

void Music::play1()
{
    using namespace audiere;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr sound = OpenSound(device, "track1.mp3", false);
    sound->play();
    Sleep(11000);
};

void Music::play2()
{
    using namespace audiere;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr sound = OpenSound(device, "track2.mp3", false);
    sound->play();
    Sleep(18000);
}

void Music::play3()
{
    using namespace audiere;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr sound = OpenSound(device, "track3.mp3", false);
    sound->play();
    Sleep(15000);
}