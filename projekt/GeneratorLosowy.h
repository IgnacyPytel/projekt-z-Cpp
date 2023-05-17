//
// Created by pytlu on 17.05.2023.
//

#ifndef LABYZCPP_GENERATORLOSOWY_H
#define LABYZCPP_GENERATORLOSOWY_H
#include <random>

class GeneratorLosowy
{
private:
    static std::random_device device;
    GeneratorLosowy(){}

public:
    static unsigned short losujPomiedzy
            (unsigned short min, unsigned short max);

    static long losujPomiedzy(long min, long max);
    static int losujOdZeraDo(int max);
};

typedef GeneratorLosowy GEN;




#endif //LABYZCPP_GENERATORLOSOWY_H
