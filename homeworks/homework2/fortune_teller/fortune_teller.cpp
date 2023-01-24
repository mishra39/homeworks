#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>       // std::string
#include <sstream>      // std::stringstream

int main()
{
    std::string name, season, adjective_1, adjective_2;
    std::vector<std::string> adjectives;
    std::unordered_map<std::string, std::string> map;
    std::vector<std::string> ending{"eats UB for breakfast", "finds errors quicker than the compiler",
                                    "is not afraid of C++ error messages"};

    std::cout << "Welcome to the fortune teller program!" << std::endl;
    std::cout << "Please enter your name: " << std::endl;
    std::cin >> name;

    std::cout << "Please enter the time of year when you were born: " << std::endl;
    std::cout << "(pick from 'spring', 'summer', 'autumn', 'winter') " << std::endl;
    std::cin >> season;

    std::cout << "Please enter an adjective: " << std::endl;
    std::cin >> adjective_1;

    std::cout << "Please enter another adjective: " << std::endl;
    std::cin >> adjective_2;
    adjectives.push_back(adjective_1);
    adjectives.push_back(adjective_2);

    // insert elements into map
    map["spring"] = "STL guru";
    map["summer"] = "C++ expert";
    map["autumn"] = "coding beast";
    map["winter"] = "software design hero";

    // get adjective
    size_t adj_idx = name.length() % adjectives.size(); 
    std::stringstream ss;
    ss << name << ", the " << map[season];
    std::cout << ss.str() << std::endl  ;
    return 0;
}