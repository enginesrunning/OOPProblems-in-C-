#include "CRezervatie.h"
#include "CRabbit.h"
#include "CFox.h"
#include "CBear.h"
#include "CLion.h"

int main() {
    CRezervatie rezervatie;

    char addAnother;
    do {
        
        std::string rabbitName;
        int rabbitAge;
        double rabbitWeight;
        int rabbitMinSurface;

        std::cout << "Enter information for Rabbit:\n";
        std::cout << "Name: ";
        std::cin >> rabbitName;
        std::cout << "Age: ";
        std::cin >> rabbitAge;
        std::cout << "Weight: ";
        std::cin >> rabbitWeight;
        std::cout << "Minimum Surface: ";
        std::cin >> rabbitMinSurface;

        rezervatie.AddAnimal(std::make_unique<CRabbit>(rabbitName, rabbitAge, rabbitWeight, rabbitMinSurface));

       
        std::string foxName;
        int foxAge;
        double foxWeight;
        int foxMaxTemperature;

        std::cout << "\nEnter information for Fox:\n";
        std::cout << "Name: ";
        std::cin >> foxName;
        std::cout << "Age: ";
        std::cin >> foxAge;
        std::cout << "Weight: ";
        std::cin >> foxWeight;
        std::cout << "Maximum Temperature: ";
        std::cin >> foxMaxTemperature;

        rezervatie.AddAnimal(std::make_unique<CFox>(foxName, foxAge, foxWeight, foxMaxTemperature));

       
        std::string bearName;
        int bearAge;
        double bearWeight;
        int bearHibernationPeriod;

        std::cout << "\nEnter information for Bear:\n";
        std::cout << "Name: ";
        std::cin >> bearName;
        std::cout << "Age: ";
        std::cin >> bearAge;
        std::cout << "Weight: ";
        std::cin >> bearWeight;
        std::cout << "Hibernation Period: ";
        std::cin >> bearHibernationPeriod;

        rezervatie.AddAnimal(std::make_unique<CBear>(bearName, bearAge, bearWeight, bearHibernationPeriod));

        
        std::string lionName;
        int lionAge;
        double lionWeight;
        int lionMinTemperature;

        std::cout << "\nEnter information for Lion:\n";
        std::cout << "Name: ";
        std::cin >> lionName;
        std::cout << "Age: ";
        std::cin >> lionAge;
        std::cout << "Weight: ";
        std::cin >> lionWeight;
        std::cout << "Minimum Temperature: ";
        std::cin >> lionMinTemperature;

        rezervatie.AddAnimal(std::make_unique<CLion>(lionName, lionAge, lionWeight, lionMinTemperature));

        std::cout << "\nDo you want to add another animal? (y/n): ";
        std::cin >> addAnother;

    } while (addAnother == 'y' || addAnother == 'Y');

   
    rezervatie.DisplayAnimals();

    return 0;
}
