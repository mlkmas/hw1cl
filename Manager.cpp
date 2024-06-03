/* student1: Noor Zerene ID 212015168
srudent2: Malak Masarwe ID 213622194 */

#include "Manager.h"
#include <iostream>

Manager::Manager(int id, std::string firstName,std::string lastName, int birthYear):id(id),firstName(firstName),lastName(lastName),birthYear(birthYear)
{}
std::string Manager::getFirstName() const
{
    return firstName;
}
Manager::Manager(const Manager& other): id(other.id), firstName(other.firstName), lastName(other.lastName), birthYear(other.birthYear)
{}
Manager& Manager::operator=(const Manager& other)
{
    if (this != &other)
    {
        id = other.id;
        firstName = other.firstName;
        lastName = other.lastName;
        birthYear = other.birthYear;
    }
    return *this;
}

std::string Manager::getLastName()const
{
    return lastName;
}
int Manager::getBirthYear()const
{
    return birthYear;
}
int Manager::getId()const
{
    return id;
}
void Manager::setBirthYear(int birthYear)
{
    this->birthYear=birthYear;
}
void Manager::setFirstName(const std::string& firstName)
{
    if(firstName.length()>10)
    {
        this->firstName="~";
        std::cout << "Manager first name length is too long"<<std::endl;
    }
    else
        this->firstName=firstName;

}
void Manager::setLastName(const std::string& lastName)
{
    if(lastName.length()>10)
    {
        this->lastName="~";
        std::cout << "Manager last name length is too long"<<std::endl;
    }
    else
        this->lastName=lastName;
}
void Manager::setId(int id)
{
    this->id=id;
}
void Manager::print()
{
    std::cout << "Printing manager: " << std::endl;
    std::cout << "Id : " << id << std::endl;
    std::cout << "First name : " << firstName << std::endl;
    std::cout << "Last name : " << lastName << std::endl;
    std::cout << "Birth year : " << birthYear << std::endl;

}