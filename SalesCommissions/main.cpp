//
//  main.cpp
//  SalesCommissions
//
//  Created by Aj Gill on 7/22/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee{
    string name;
    vector<int> revenue;
    vector<int> expenses;
    int profit;
    int profitSum;
    double commission;
    
};

int main() {
    // Take in how how many members and products to create arrays of that size
    int numSales, numProducts;
    cout << "How many members on your sales team and how many products?" << endl;
    cin >> numSales >> numProducts;
    
    int revenue;
    int expense;
    string salesTeam[numSales];
    vector <Employee> employee;
    
    for (int i=0; i<numSales; i++){
        cout << "Input salesman #" << i+1 << "'s name" << endl;
        Employee salesmani;
        cin >> salesmani.name;
        cout << "Input salesman #" << i+1 << "'s revenues"<< endl;
        for (int j=0; j<numProducts; j++){
            cin >> revenue;
            if (revenue < 1){
                cout << "You entered an invalid revenue" << endl;
                break;
            }
            else{
                salesmani.revenue.push_back(revenue);
            }
        }
        
        cout << "Input salesman #" << i+1 << "'s expenses"<< endl;
        for (int k=0; k<numProducts; k++){
            cin >> expense;
            if (expense < 1){
                cout << "You entered an invalid expense" << endl;
                break;
            }
            else{
                salesmani.expenses.push_back(expense);
            }
        }
        employee.push_back(salesmani);
    }
    
    for (int i=0; i<numSales; i++){
        for (int j=0; j<numProducts; j++){
            employee[i].profit = employee[i].revenue[j] - employee[i].expenses[j];
            if (employee[i].profit>0)
                employee[i].profitSum += employee[i].profit;
        }
        employee[i].commission = ((employee[i].profitSum)*(0.062));
    }
    
    for (int i=0; i<numSales; i++){
        cout << employee[i].name << "'s commission is " << employee[i].commission;
    }
}
