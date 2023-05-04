#include <iostream>
#include <string>
#include "../hdrs/unorderedmap.hpp"

int main(int argc, char* argv[]) {
    UnorderedMap* map = new UnorderedMap(StorageType::LINKEDLIST, 2);    
    map->add("0", "t0");
    map->add("1", "t1");
    map->add("2", "t2");
    map->add("3", "t3");
    map->add("4", "t4");

    std::cout << (*map)["0"] << std::endl;
    std::cout << (*map)["1"] << std::endl;
    std::cout << (*map)["2"] << std::endl;
    std::cout << (*map)["3"] << std::endl;
    std::cout << (*map)["4"] << std::endl;
    std::cout << (*map)["5"] << std::endl;

    
    return 0;
}
