#include <string.h>
#include <iostream>
#include "Company.h"

Company::Company(const std::string& name):shopNumber(0)
{
    if(name.length()>10)
    {
        std::cout<< "Company name length is too long"<< std::endl;
        this->name="~";
    }
    else this->name=name;


    for (int i=0; i< MAX_Shop_NUMBER;i++)
    {
        shops[i];
    }
}
Company::Company(const Company& other)
:name(other.name),shopNumber(other.shopNumber)
{
    for(int i=0;i<shopNumber;i++)
    {
        shops[i]=other.shops[i];
    }
}
Company& Company::operator=(const Company& other)
{
    if (this != &other)
    {
        name = other.name;
        shopNumber = other.shopNumber;
        for (int i = 0; i < shopNumber; ++i)
        {
            shops[i] = other.shops[i];
        }
    }
    return *this;
}
Shop Company::getShops() const
{
    return *shops;
}
void Company::setShops(Shop newShops[MAX_Shop_NUMBER])
{
    shopNumber = 0;

    for (int i = 0; i < MAX_Shop_NUMBER; i++)
    {

        shops[i] = newShops[i];
        shopNumber++;
    }
}
std::string Company::getName()const
{
    return name;
}
int Company::getShopNumber()const
{
    return shopNumber;
}
void Company::setShopNumber(const int number)
{
    if(number<0 || number>10)
    {
        this->shopNumber=0;
    }
    else this->shopNumber=number;
}
void Company::setName(const std::string& name)
{
    if(name.length()>10)
    {
        std::cout<< "Company name length is too long"<< std::endl;
        this->name="~";
    }
    else this->name=name;
}
void Company::addShop(const Shop& shop)
{
    if(this->shopNumber>=MAX_Shop_NUMBER)
    {
        std::cout<< "There is no place for new Shop! "<<std::endl;
    }
    else
    {
        this->shops[shopNumber]=shop;
        shopNumber++;
    }
}
void Company::printShopByName()
{
    if(shopNumber==0)
    {
        std::cout<<"There are no shops in this company."<<std::endl;
        return;
    }
    std::cout<<"There are " <<shopNumber<< " shops in this company. The shops details are : "<<std::endl;
    int current=0,swap=0,sortedOrder[MAX_Shop_NUMBER]={0};
    for(int i=0;i<shopNumber;i++)
    {
        sortedOrder[i]=i;
    }
    for(int i=0;i<shopNumber-1;i++)
    {
        for(int j=i;j<shopNumber;j++)
        {
            if(shops[sortedOrder[i]].getName()>shops[sortedOrder[j]].getName())
            {
                swap=sortedOrder[j];
                sortedOrder[j]=sortedOrder[i];
                sortedOrder[i]=swap;
            }
        }
    }
    for(int i=0;i<shopNumber;i++)
    {
        std::cout<<"Shop #"<<i+1<<" :"<<std::endl;
        shops[sortedOrder[i]].print();
        std::cout << std::endl;
    }

}
void Company::printShopByDay()
{
    int counter=1;
    if(shopNumber==0)
    {
        std::cout<<"There are no shops in this company."<<std::endl;
        return;
    }
    std::cout<<"There are " <<shopNumber<< " shops in this company. The shops details are : "<<std::endl;
    /*
     * go through every day in order and print the shops accordingly
     * */

    for(int i=0;i<7;i++)
    {
        for(int j=0;j<shopNumber;j++)
        {
            if(shops[j].getClosedDay()==Day(i))
            {
                std::cout<<"Shop #"<< counter <<" :"<<std::endl;
                shops[j].print();
                std::cout << std::endl;
                counter++;
            }
        }
    }
}



