#ifndef UNORDEREDMAP_HPP
#define UNORDEREDMAP_HPP

#include <string>
#include <vector>
#include "storage.hpp"
#include "linkedlist.hpp"

class UnorderedMap {
private:
    std::vector<LinkedList*> storage;
    unsigned int maxSlots;
    unsigned int hash(std::string value);    

public:
    UnorderedMap(StorageType st, unsigned int slots);
    ~UnorderedMap();
    
    void add(std::string key, std::string value);
    std::string operator[] (std::string value); // retrieval
};


#endif//UNORDEREDMAP_HPP
