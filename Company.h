
#ifndef _COMPANY_H_
#define _COMPANY_H_

#include <iostream>
#include<string.h>
#include "Shop.h"

#define MAX_Shop_NUMBER 10
class Company
{
private:
    std::string name;
    Shop shops[MAX_Shop_NUMBER];
    int shopNumber;

public:
    Company(const std::string& name="~");
    std::string getName()const;
    int getShopNumber()const;
    Shop getShops()const;
    void setShops(Shop newShops[MAX_Shop_NUMBER]);
    void setName(const std::string&);
    void setShopNumber(int number);
    void addShop(const Shop& shop);
    void printShopByName();
    void printShopByDay();
   Company& operator=(const Company& other);
    Company(const Company& other);
    ~Company()=default;





};








#endif //UNTITLED12_COMPANY_H
