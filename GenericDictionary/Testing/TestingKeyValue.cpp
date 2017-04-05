//
// Created by benja on 4/3/2017.
//

#include "TestingKeyValue.h"
#include "../KeyValue.h"
#include <iostream>

void TestingKeyValue::testKeyValueConstructor()
{
    std::cout << "Testing KeyValue Constructor" << std::endl;
    KeyValue<std::string, std::string>* keyValue = new KeyValue<std::string, std::string>("arm", "two");
    if(keyValue == nullptr)
        std::cout << " There is a problem in the keyValue constructor" << std::endl;
    KeyValue<std::string, std::string>* keyValue1 = new KeyValue<std::string, std::string>( "" , "");
    if(keyValue1 == nullptr)
        std::cout << "There is a problem in the keyCalue constructor" << std::endl;
}
void TestingKeyValue::testGetKey()
{
    std::cout << "Testing getKey method" << std::endl;
    KeyValue<std::string, std::string>* keyValue = new KeyValue<std::string, std::string>("hair", "brown");
    if(keyValue == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue->getKey() != "hair")
        std::cout << "There was an issue in getting the key." << std::endl;
    KeyValue<int, int>* keyValue1 = new KeyValue<int, int>(1, 2);
    if(keyValue1 == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue1->getKey() != 1)
        std::cout << "There was an issue in getting the key." << std::endl;
    KeyValue<int, std::string>* keyValue2 = new KeyValue<int, std::string>(1, "brown");
    if(keyValue2 == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue2->getKey() != 1)
        std::cout << "There was an issue in getting the key." << std::endl;

}
void TestingKeyValue::testGetValue()
{
    std::cout << "Testing getValue method" << std::endl;
    KeyValue<std::string, std::string>* keyValue = new KeyValue<std::string, std::string>("hair", "brown");
    if(keyValue == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue->getValue() != "brown")
        std::cout << "There was an issue in getting the value." << std::endl;
    KeyValue<int, int>* keyValue1 = new KeyValue<int, int>(1, 2);
    if(keyValue1 == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue1->getValue() != 2)
        std::cout << "There was an issue in getting the value." << std::endl;
    KeyValue<int, std::string>* keyValue2 = new KeyValue<int, std::string>(1, "brown");
    if(keyValue2 == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue2->getValue() != "brown")
        std::cout << "There was an issue in getting the value." << std::endl;
    KeyValue<std::string, int>* keyValue3 = new KeyValue<std::string, int>("white", 4);
    if(keyValue3 == nullptr)
        std::cout << "There was a problem in the keyValue constructor" << std::endl;
    if(keyValue3->getValue() != 4)
        std::cout << "There was an issue in getting the value." << std::endl;
}