//
// Created by ochoa on 10-07-19.
//

#ifndef PORTAFOLIO_STOCKCOLLECTION_H
#define PORTAFOLIO_STOCKCOLLECTION_H


#include "Stock.h"
#include <vector>

/* Collection of Stocks */

class StockCollection {
public:
    // Const iterators: these are used to iterate the collection
    using const_iterator = std::vector<Stock*>::const_iterator;
    const_iterator cbegin() const;
    const_iterator cend() const;

    // Add stock to the collection
    void AddStock(Stock *stk);

    // Remove stock from the collection
    void RemoveStock(Stock *stk);

private:
    std::vector<Stock*> stocks;
};


#endif //PORTAFOLIO_STOCKCOLLECTION_H
