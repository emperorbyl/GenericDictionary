#include <iostream>
#include "Dictionary.h"

int main() {
    Dictionary<std::string, int>* dictionary = new Dictionary<std::string, int>("Benjamin", 26);
    dictionary->add("Fred", 23);
    dictionary->add("Bethany", 13);
    dictionary->add("Kody", 43);
    dictionary->add("Kelsie", 27);
    dictionary->add("Crysta", 26);
    dictionary->add("Robert", 30);
    dictionary->add("Rachel", 22);
    dictionary->add("Scott", 54);
    dictionary->add("Roberta", 54);
    dictionary->add("Steven", 34);
    std::string name;
    int age;
    std::string match;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "What is your age?" << std::endl;
    std::cin >> age;
    std::cout << "Looking for someone your age." << std::endl;
    for(int i = 0; i < dictionary->getCount(); i++)
    {
        if(dictionary->getByIndex(i)->getValue() == age) {
            match = dictionary->getByIndex(i)->getKey();
            break;
        }
        else
            match = "We are sorry. There is no one your age.";
    }
    std::cout << "The name of your match is " << match << std::endl;
    return 0;
}