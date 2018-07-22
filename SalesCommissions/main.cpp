//
//  main.cpp
//  SalesCommissions
//
//  Created by Aj Gill on 7/22/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//
//You're a regional manager for an office beverage sales company, and right now you're in charge of paying your sales team they're monthly commissions.
//
//Sales people get paid using the following formula for the total commission: commission is 6.2% of profit, with no commission for any product to total less than zero.
//
//Input Description
//You'll be given two matrices showing the sales figure per salesperson for each product they sold, and the expenses by product per salesperson. Example:
//
//Revenue
//
//         Frank   Jane
//Tea       120    145
//Coffee    243    265
//
//Expenses
//
//         Frank   Jane
//Tea       130     59
//Coffee    143    198

//Output Description
//Your program should calculate the commission for each salesperson for the month. Example:
//
//                Frank   Jane
//Commission       6.20   9.49



#include <iostream>

using namespace std;

int main() {
    // Take in how how many members and products to create arrays of that size
    int numSales, numProducts;
    cout << "How many members on your sales team and how many products?" << endl;
    cin >> numSales >> numProducts;
    int salesTeam[numProducts][numSales];
    double commission[numSales];
    // Initialize 2D array with for loops and names of members and products
    cout << "Please enter the names of the sales team seperated by spaces" << endl;
    for(int i=0; i<numSales; i++)
        cin >> salesTeam[1][i];
    cout << "Please enter the names of the products seperated by spaces" << endl;
    for(int i=0; i<numProducts; i++)
        cin >> salesTeam[i][0];
    

}
