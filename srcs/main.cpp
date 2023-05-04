#include <iostream>
#include <string>
#include "../hdrs/unorderedmap.hpp"

int main(int argc, char* argv[]) {
    LinkedList* list = new LinkedList();
    UnorderedMap* map = new UnorderedMap(StorageType::LinkedList, 2);    
    map["abc"].add("abc", "t1");
    map["bac"].add("bac", "t2");
    map["abd"].add("abd", "t3");

    std::cout << map["abc"] << std::endl;

    return 0;
}
