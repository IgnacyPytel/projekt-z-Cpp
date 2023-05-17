//
// Created by pytlu on 17.05.2023.
//

#include "mieszkaniec.h"

Mieszkaniec::Mieszkaniec(char _symbol)
{
    symbol = _symbol;
}

Mieszkaniec::Mieszkaniec(const Mieszkaniec &mieszkaniec)
{
    symbol = mieszkaniec.symbol;
}

char Mieszkaniec::jakiSymbol() const
{
    return symbol;
}

Mieszkaniec::~Mieszkaniec()
{

}