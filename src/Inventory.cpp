#include "Inventory.h"

Inventory::Inventory()
{
    sizeI = 0;
    capacity = 3;
}

Inventory::~Inventory()
{
    //dtor
}

int Inventory::getSize() const{
    return this->sizeI;
}

int Inventory::getCapacity() const{
    return this->capacity;
}

bool Inventory::addProduct(Product &product)const{
    // The logic is here
    return true;
}
