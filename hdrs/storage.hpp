#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>

enum StorageType {
    LINKEDLIST,
    TWODARRAY
};

class Storage {
public:
    virtual std::string find(std::string key) = 0;
    virtual void add(std::string key, std::string value) = 0;
    virtual std::string operator[] (std::string key) = 0;
    virtual std::string remove(std::string key) = 0;    
};

#endif//STORAGE_HPP
