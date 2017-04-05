//
// Created by benja on 4/3/2017.
//

#include "TestingDictionary.h"
#include "TestingKeyValue.h"

int main()
{
    TestingDictionary test;
    test.testAdd();
    test.testDestructor();
    test.testDictionary();
    test.testDictionaryWithIntDictionary();
    test.testGetByIndex();
    test.testGetByKey();
    test.testGetCount();
    test.testRemoveByIndex();
    test.testRemoveByKey();

    TestingKeyValue testKey;
    testKey.testGetKey();
    testKey.testGetValue();
    testKey.testKeyValueConstructor();
    return 0;
}