#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
    public:
        Product(std::string name, double price, int quantity);
        Product();
        virtual ~Product();

        // The setters
        void setID(int id);
        void setName(std::string name);
        void setPrice(double price);
        void setExpiryDate(string date);


        // the getters
        int getproductID()const;
        std::string getName()const;
        double getPrice()const;
        string getExpiryDate();

        bool isExpired();
        void displayInfo() const;
        void updateQuantity(int quantity);

    protected:

    private:
        static int value;
        int productId = 0001;
        std::string productName;
        double productPrice;
        string productExpiryDate = "non"; // This will then be optional if the goods are going to be perishable //
        int productQuantity;
};

#endif // PRODUCT_H
