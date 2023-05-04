#include <iostream>
#include <string>
#include "../hdrs/unorderedmap.hpp"

int main(int argc, char* argv[]) {
    LinkedList* list = new LinkedList();
    UnorderedMap* map = new UnorderedMap(StorageType::LINKEDLIST, 2);    
    map->add("abc", "t1");
    map->add("bac", "t2");
    map->add("abd", "t3");

    std::cout << (*map)["abc"] << std::endl;

    return 0;
}
