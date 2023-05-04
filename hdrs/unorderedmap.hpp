#ifndef UNORDEREDMAP_HPP
#define UNORDEREDMAP_HPP

#include <string>
#include <vector>
#include "./storage.hpp"
#include "./linkedlist.hpp"

class UnorderedMap {
private:
    
    std::vector<LinkedList*> storage;
    unsigned int maxSlots;
    unsigned int hash(std::string value);    

public:
    UnorderedMap(StorageType st, unsigned int slots);
    ~UnorderedMap();
    
    std::string operator[] (std::string value); // retrieval and addition
};


#endif//UNORDEREDMAP_HPP
