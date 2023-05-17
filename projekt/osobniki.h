//
// Created by pytlu on 17.05.2023.
//

#ifndef LABYZCPP_OSOBNIKI_H
#define LABYZCPP_OSOBNIKI_H
#include "organizm.h"
#include "mieszkaniec.h"

class Glon: protected Organizm, public Mieszkaniec {
public:
    Glon();
    virtual RodzajMieszkanca kimJestes() final;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo);

    virtual Mieszkaniec * dajPotomka();

    virtual void przyjmijZdobycz
            (Mieszkaniec * mieszkaniec);
};

class Grzyb: protected Organizm, public Mieszkaniec {
public:
    Grzyb();
    virtual RodzajMieszkanca kimJestes() final;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo);

    virtual Mieszkaniec * dajPotomka();

    virtual void przyjmijZdobycz
            (Mieszkaniec * mieszkaniec);
};

class Bakteria: protected Organizm, public Mieszkaniec {
public:
    Bakteria();
    virtual RodzajMieszkanca kimJestes() final;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo);

    virtual Mieszkaniec * dajPotomka();
    virtual void przyjmijZdobycz
            (Mieszkaniec * mieszkaniec);
};

#endif //LABYZCPP_OSOBNIKI_H
