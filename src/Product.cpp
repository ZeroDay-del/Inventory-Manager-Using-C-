#include "Product.h"

Product::Product(int id, std::string name, double price)
{
    this->id = id;
    this->name = name;
    this->price = price;
}

Product::~Product()
{
    //dtor
}


void Product::setID(int id){
    this->id = id;
}

void Product::setName(std::string name){
    this->name = name;
}

void Product::setPrice(double price){
    this->price = price;
}

int Product::getID()const{
    return this->id;
}


std::string Product::getName()const{
    return this->name;
}

double Product::getPrice()const{
    return this->price;
}
