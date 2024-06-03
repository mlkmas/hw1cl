
#include<string.h>
#include<iostream>
#include "Shop.h"


Shop::Shop()
        : manager(), name("~"), closedDay(Day::Sunday), isOnline(false) {}

Shop::Shop(const Manager& manager, const std::string& name, Day closedDay, bool isOnline)
        : manager(manager), name(name), closedDay(closedDay), isOnline(isOnline) {}

Manager Shop::getManager() const
{
    return manager;
}

std::string Shop::getName() const
{
    return name;
}

Day Shop::getClosedDay() const
{
    return closedDay;
}

bool Shop::getIsOnline() const
{
    return isOnline;
}

void Shop::setManager(Manager& newManager)
{
    manager = newManager;
}

void Shop::setName(const std::string& newName)
{
    if(newName.length()>10)
    {
        this->name="~";
        std::cout <<"Shop name length is too long"<<std::endl;
    }
    else
      name = newName;
}

void Shop::setIsOnline(const bool newIsOnline)
{
    isOnline = newIsOnline;
}

void Shop::setClosedDay(const Day closedDay)
{
    this->closedDay=closedDay;
}

void Shop::print()
{
    std::cout<< "Printing shop: "<<std::endl;
    this->manager.print();
    std::cout<<"Name : "<< this->name<<std::endl;
    std::cout << "Closed day : ";
    switch (closedDay) {
        case Day::Sunday:
            std::cout << "Sunday";
            break;
        case Day::Monday:
            std::cout << "Monday";
            break;
        case Day::Tuesday:
            std::cout << "Tuesday";
            break;
        case Day::Wednesday:
            std::cout << "Wednesday";
            break;
        case Day::Thursday:
            std::cout << "Thursday";
            break;
        case Day::Friday:
            std::cout << "Friday";
            break;
        case Day::Saturday:
            std::cout << "Saturday";
            break;
    }
    std::cout << std::endl;
    std::cout << "Is Online : " << (isOnline ? "True" : "False") << std::endl ;
}

Shop::Shop(const Shop& other): manager(other.manager), name(other.name), closedDay(other.closedDay), isOnline(other.isOnline)
{}
Shop& Shop::operator=(const Shop& other)
{
    if (this != &other)
    {
        manager = other.manager;
        name = other.name;
        closedDay = other.closedDay;
        isOnline = other.isOnline;
    }
    return *this;
}
