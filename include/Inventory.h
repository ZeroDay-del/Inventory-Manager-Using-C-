#ifndef INVENTORY_H
#define INVENTORY_H
#include "product.h"

class Inventory
{
    public:
        Inventory();
        virtual ~Inventory();
        bool addProduct(Product &product) const;
        int getSize() const;
        int getCapacity() const;

    protected:

    private:
        Product *prod;
        int sizeI;
        int capacity;

};

#endif // INVENTORY_H
