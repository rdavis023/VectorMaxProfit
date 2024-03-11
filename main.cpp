#include "MaxProfit.h"


int maxProfit(vector<int>& prices) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function calculates the maximum profit       |
  //   |   from buying and selling a stock.                  |
  //   | - It iterates through the 'prices' array once.      |
  //   |                                                     |
  //   | Return type: int                                    |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'minPrice' keeps track of the lowest price.       |
  //   | - 'maxProfit' stores the maximum profit found.      |
  //   | - Use 'min' and 'max' functions to update values.   |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
  int minPrice = INT_MAX; // Initialize minPrice to a very large number
    int maxProfit = 0; // Initialize maxProfit to 0

    for (int price : prices) {
        // Update minPrice if the current price is lower than what we have seen before
        if (price < minPrice) {
            minPrice = price;
        }
        // Calculate profit by subtracting the current price with minPrice
        // Update maxProfit if the current profit is greater than the previous maxProfit
        else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice;
        }
    }

    return maxProfit;
}