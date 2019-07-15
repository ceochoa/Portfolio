//
// Created by ochoa on 10-07-19.
//

#include "Date.h"
#include "StockCollection.h"

class Portfolio {
public:
    // The profit over a period is the difference between the starting value and
    // the finishing value of the portfolio
    double Profit(const Date& start, const Date& finish) const;

    // The annualized return over a period is (1 + r)^365/n - 1 where
    // r is the return, and n is the number of days between start and finish
    double AnnualizedReturn(const Date& start, const Date& finish) const;

    // The overall return over a period is the division of the profit by
    // the starting value of the portfolio
    double Return(const Date& start, const Date& finish) const;

private:
    StockCollection stocks;
};
