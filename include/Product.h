#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
class Product
{
    public:
        Product(int id, std::string name, double price);
        virtual ~Product();
        void setID(int id);
        void setName(std::string name);
        void setPrice(double price);

        int getID()const;
        std::string getName()const;
        double getPrice()const;

    protected:

    private:
        int id;
        std::string name;
        double price;
};

#endif // PRODUCT_H
