#include "../hdrs/unorderedmap.hpp"
#include "../hdrs/linkedlist.hpp"
#include <vector>

unsigned int UnorderedMap::hash(std::string value) {
    auto sum = [&](std::string s) {
        int out = 0;
        for(char c : s) {
            out += c;
        }
        return out;
    };
    return sum(value) % maxSlots;
}

UnorderedMap::UnorderedMap(StorageType st, unsigned int slots) {
    maxSlots = slots;    
    
    for (unsigned int i = 0; i < slots; i++) {
        switch(st) {
            case StorageType::LinkedList:
                this->storage.push_back( new LinkedList() );
                break;
            case StorageType::TwoDArray:
                return;
                break;
        }
    }
}

UnorderedMap::~UnorderedMap() {}

std::string UnorderedMap::operator[] (std::string value) {
    unsigned int index = hash(value);
    return storage[index]->find(value);// not what I want to do but whatever
}
