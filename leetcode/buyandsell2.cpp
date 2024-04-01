#include <bits/stdc++.h>
using namespace std;

class BuyAndSell {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if (size <= 1) return 0; // If there's only one or no prices, no profit can be made
        
        int max_profit = 0;
        int min_price = prices[0]; // Initialize minimum price to the first price
        
        for (int i = 1; i < size; ++i) {
            max_profit = max(max_profit, prices[i] - min_price); // Update max profit if we find a better opportunity
            min_price = min(min_price, prices[i]); // Update minimum price seen so far
        }
        
        return max_profit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Sample prices
    
    BuyAndSell solution; // Create an instance of the BuyAndSell class
    int maxProfit = solution.maxProfit(prices); // Call the maxProfit function
    
    cout << "Maximum profit: " << maxProfit << endl; // Output the result
    
    return 0;
}
