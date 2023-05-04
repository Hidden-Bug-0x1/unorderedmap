#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>

enum StorageType {
    LinkedList,
    TwoDArray
};

class Storage {
public:
    std::string find(std::string value);
    void add(std::string value);
    void operator= (std::string value);
    std::string operator[] (unsigned int index);
    std::string remove(unsigned int index);    
};

#endif//STORAGE_HPP
