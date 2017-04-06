//
// Created by benja on 4/3/2017.
//

#ifndef GENERICDICTIONARY_DICTIONARY_H
#define GENERICDICTIONARY_DICTIONARY_H
#include <string>
#include "KeyValue.h"
#include "Container.h"
#include <iostream>

template <typename T, typename X>
class Dictionary {
public:
    void add(T key, X value);
    Dictionary<T, X>(T key, X value);
    Dictionary(int size);
    int getCount();
    KeyValue<T, X>* getByKey(T key);
    KeyValue<T, X>* getByIndex(int index);
    void removeByKey(T key);
    void removeByIndex(int index);
    ~Dictionary();
    KeyValue<T, X>* operator [](unsigned int index);
private:
    Container<KeyValue<T, X>> dictionary;

};

template <typename T, typename X>
void Dictionary<T, X>::add(T key, X value)
{
    KeyValue<T, X>* keyVal = new KeyValue<T, X>(key, value);
    bool toAdd = true;
    for(int i = 0; i < dictionary.getCount(); i++)
    {
        if(key == dictionary[i]->getKey()) {
            toAdd = false;
            throw "Key already exists!";
        }
    }
    if(toAdd)
        dictionary.add(keyVal);
}

template <typename T, typename X>
Dictionary<T, X>::Dictionary(T key, X value)
{
    KeyValue<T, X>* keyVal = new KeyValue<T, X>(key, value);
    dictionary.add(keyVal);
}

template <typename T, typename X>
Dictionary<T, X>::Dictionary(int size)
{

    for(int i = 0; i < size; i++)
    {
        dictionary.add(new KeyValue<std::string, std::string>("", ""));
    }
}

template <typename T, typename X>
int Dictionary<T, X>::getCount()
{
    return dictionary.getCount();
}

template <typename T, typename X>
KeyValue<T, X>* Dictionary<T, X>::getByKey(T key)
{
    std::string lookValue = "";
    bool exits = false;
    for(int i = 0; i < dictionary.getCount(); i++)
    {
        if(key == dictionary[i]->getKey()) {
            lookValue = dictionary[i]->getValue();
            exits = true;
        }
    }
    if(!exits)
        throw "This key isn't valid.";
    KeyValue<T, X>* keyValue = new KeyValue<T, X>(key, lookValue);
    return keyValue;
}

template <typename T, typename X>
KeyValue<T, X>* Dictionary<T, X>::getByIndex(int index)
{
    if(index > dictionary.getCount() - 1)
        throw "The index is outside of the dictionary.";
    return dictionary.get(index);
}

template <typename T, typename X>
void Dictionary<T, X>::removeByKey(T key)
{
    bool exits = false;
    for(int i = 0; i < dictionary.getCount(); i++)
    {
        if(key == dictionary[i]->getKey()) {
            dictionary.remove(i);
            exits = true;
        }
    }
    if(!exits)
        throw "This key isn't valid.";
}

template <typename T, typename X>
void Dictionary<T, X>::removeByIndex(int index)
{
    if(index > dictionary.getCount() - 1)
        throw "The index is outside of the dictionary.";
    dictionary.remove(index);
}

template <typename T, typename X>
Dictionary<T, X>::~Dictionary()
{
    for(int i = 0; i < dictionary.getCount(); i++)
        delete dictionary[i];
}

template <typename T, typename X>
KeyValue<T, X>* Dictionary<T, X>::operator [](unsigned int index)
{
    return getByIndex(index);
}
#endif //GENERICDICTIONARY_DICTIONARY_H
