//
// Created by ochoa on 10-07-19.
//

#include "StockCollection.h"
#include "algorithm"

StockCollection::const_iterator StockCollection::cbegin() const{
    return stocks.cbegin();
}

StockCollection::const_iterator StockCollection::cend() const{
    return stocks.cend();
}

void StockCollection::AddStock(Stock *stk) {
    stocks.push_back(stk);
}

void StockCollection::RemoveStock(Stock *stk) {
    auto it = find(stocks.begin(), stocks.end(), stk);
    stocks.erase(it);
}
