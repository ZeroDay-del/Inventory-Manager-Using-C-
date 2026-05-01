#include <iostream>
#include "../include/Product.h"

using namespace std;

int main()
{
    Product* first = new Product("Sthembiso Khoza", 200, 32);
    first->displayInfo();

    delete first;
    cout << "Sthe" << endl;
    return 0;
}
