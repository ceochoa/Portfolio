//
// Created by ochoa on 10-07-19.
//

#ifndef PORTAFOLIO_STOCK_H
#define PORTAFOLIO_STOCK_H


#include "Date.h"

/* Stock abstract class */

class Stock {
public:
    // Stock's price on a given date
    virtual double Price(const Date &date) const = 0;
};


#endif //PORTAFOLIO_STOCK_H
