//
// Created by pytlu on 17.05.2023.
//

#include "GeneratorLosowy.h"

std::random_device GeneratorLosowy::device;
unsigned short GeneratorLosowy::losujPomiedzy
        (unsigned short min, unsigned short max)
{
    if(min>max){
        unsigned short t = min;
        min = max;
        max = t;
    }

    std::uniform_int_distribution
            dist(min, max);

    return dist(GeneratorLosowy::device);
}
long GeneratorLosowy::losujPomiedzy(long min, long max)
{
    if(min>max){
        long t = min;
        min = max;
        max = t;
    }

    std::uniform_int_distribution dist(min, max);
    return dist(GeneratorLosowy::device);
}
int GeneratorLosowy::losujOdZeraDo(int max)
{
    std::uniform_int_distribution dist(0, max);
    return dist(GeneratorLosowy::device);
}
