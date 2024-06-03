#ifndef _Shop_H_
#define _Shop_H_


#include<string.h>
#include<iostream>
#include "Manager.h"

enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday

};
class Shop
{
private:


    Manager manager;
    std::string name;
    Day closedDay;
    bool isOnline;

public:

    Shop();
    Shop(const Manager& manager, const std::string& name, Day closedDay, bool isOnline);
    Manager getManager()const;
    std::string getName()const;
    Day getClosedDay()const;
    bool getIsOnline()const;
    void setManager(Manager &manager);
    void setName(const std::string&);
    void setIsOnline(const bool isONline);
    void setClosedDay(const Day closedDay);
    void print();
    Shop(const Shop& other);
    ~Shop()=default;
    Shop& operator=(const Shop& other);






};









#endif