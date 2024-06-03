#include "Company.h"
#include <iostream>
#include <string>


int main()
{

    freopen("myOutput.txt", "w", stdout); // saving the output to a file named "myOutput.txt" in the project directory;
    Manager manager1;
    manager1.setId(1);
    manager1.setFirstName("Dennis");
    manager1.setLastName("Ritchie");
    manager1.setBirthYear(1941);

    Manager manager2(2, "Steve", "Jobs", 1955);

    Shop shop1;
    shop1.setName("KPS");
    shop1.setClosedDay(Monday);
    shop1.setManager(manager2);


    Shop shop2(manager1, "Jvory", Tuesday, true);
    std::cout << "Manager 1 details:" << std::endl;
    manager1.print();

    std::cout << std::endl << "Shop 2 details:" << std::endl;
    shop2.print();
    std::cout << std::endl << std::endl;


    manager1.setFirstName("I don't remember his name...");
    std::cout << std::endl << std::endl;

    shop2.setName("Selling all sorts of things");
    std::cout << shop2.getName() << std::endl;
    shop2.setName("MegaSuperDuperSal");
    std::cout << shop2.getName() << std::endl;
    shop2.setName("BeOrNot");
    std::cout << shop2.getName() << std::endl;
    Company company("A very long name for our company! very long!!! very very!!");
    std::string name = "CompanyName";
    company.setName(name);
    std::cout << company.getName() << std::endl;
    company.printShopByDay();
    company.addShop(shop1);
    company.addShop(shop2);
    company.printShopByDay();
    company.printShopByName();

    return 0;
}
