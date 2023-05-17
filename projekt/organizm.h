//
// Created by pytlu on 17.05.2023.
//

#ifndef LABYZCPP_ORGANIZM_H
#define LABYZCPP_ORGANIZM_H


class Organizm{

public:
    const unsigned short limitPosilkow;
    const unsigned short kosztPotomka;

private:
    unsigned short licznikZycia;
    unsigned short licznikPosilkow;

public:
    Organizm(unsigned short dlugoscZycia,
             unsigned short limitPosilkow,
             unsigned short kosztPotomka);

    bool zywy() const
    {return licznikZycia > 0;}

    bool glodny() const
    {return zywy() && licznikPosilkow < limitPosilkow;}

    bool paczkujacy() const
    {return zywy() && licznikPosilkow > kosztPotomka;}

    unsigned short stanLicznikaZycia() const
    {return licznikZycia;}

    unsigned short stanLicznikaPosilkow() const
    {return licznikPosilkow;}

    bool posilek();
    bool potomek();

    void krokSymulacji();
};


#endif //LABYZCPP_ORGANIZM_H
