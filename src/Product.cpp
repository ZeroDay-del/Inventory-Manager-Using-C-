#include "Product.h"
#include <string>
#include <iostream>

using namespace std;
Product::Product(std::string name, double price, int quantity)
{
    productId = value ++;
    this->productName = name;
    this->productPrice = price;
    this->productQuantity = quantity;
}

Product::~Product()
{
    //dtor
}

void Product::setID(int id){
    this->productId = id;
}

void Product::setName(std::string name){
    this->productName = name;
}

void Product::setPrice(double price){
    this->productPrice = price;
}

int Product::getproductID()const{
    return this->productId;
}


std::string Product::getName()const{
    return this->productName;
}

double Product::getPrice()const{
    return this->productPrice;
}

string Product::getExpiryDate(){
    return productExpiryDate;
}

bool Product::isExpired(){
    if(productExpiryDate == "non"){
        return false;
    }

    return true;
}

void Product::updateQuantity(int number){
    if(number > 0)productQuantity = number;
}

void Product::displayInfo() const{
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Name: " << productName << std::endl;
    std::cout << "Price: R" << productPrice << std::endl;
    std::cout << "Quantity: " << productQuantity << std::endl;
    std::cout << "------------------------" << std::endl;
}