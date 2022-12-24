#include <iostream>
#include "windows.h"
#include "music.h"
#include "audiere.h"
#include <conio.h>

Music::Music() {};

void Music::play1()
{
    using namespace audiere;
    int x;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr sound = OpenSound(device, "track1.mp3", false);
    sound->play();
    std::cin >> x;
};

void Music::play2()
{
    using namespace audiere;
    int x;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr sound = OpenSound(device, "track2.mp3", false);
    sound->play();
    std::cin >> x;
}

void Music::play3()
{
    using namespace audiere;
    int x;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr sound = OpenSound(device, "track3.mp3", false);
    sound->play();
    std::cin >> x;
}