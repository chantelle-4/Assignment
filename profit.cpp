#include <iostream>
using namespace std;

int main() {
    double buyingPrice;
    double sellingPrice;
    double profit;

    cout << "Enter the buying price of the motor vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the motor vehicle: ";
    cin >> sellingPrice;

    profit = sellingPrice - buyingPrice;
    
    cout << "----------------------------------" << endl;
    cout << "Buying Price: " << buyingPrice << endl;
    cout << "Selling Price: " << sellingPrice << endl;
    cout << "Profit Made: " << profit << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
