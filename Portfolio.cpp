//
// Created by ochoa on 10-07-19.
//

#include <cmath>
#include "Portfolio.h"

double Portfolio::Profit(const Date &start, const Date &finish) const{
    double ans = 0;

    for(auto stk = stocks.cbegin(); stk != stocks.cend(); stk++)
        ans += (*stk) -> Price(finish) - (*stk) -> Price(start);

    return ans;
}

double Portfolio::AnnualizedReturn(const Date &start, const Date &finish) const {
    auto r = Return(start, finish);
    auto n = ElapsedDays(start, finish);

    return std::pow(r + 1, 365.0/n) - 1;
}

double Portfolio::Return(const Date &start, const Date &finish) const {
    auto sum_of_initial_prices = 0;

    for(auto it = stocks.cbegin(); it != stocks.cend(); ++it)
        sum_of_initial_prices += (*it) -> Price(start);

    return Profit(start, finish)/sum_of_initial_prices;
}
