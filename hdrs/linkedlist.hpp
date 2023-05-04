#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <string>
#include "./storage.hpp"

class LinkedList : public Storage{
private:
    class Node {
    private:
        Node* next;
        std::string data;
        std::string key;
    public:
        Node(std::string key, std::string data);
        ~Node();
        void setnext(Node* node); 
        Node* getnext();
        std::string getdata();
        std::string getkey();    
    };    
    
    Node* root;
    unsigned int length;

public:
    LinkedList();
    ~LinkedList(); 
    
    std::string find(std::string key, std::string value);
    void add(std::string key, std::string value); // add to the back
    std::string operator[] (std::string key); // retrieve a value at an index
    std::string remove(std::string key); // remove a specific node and return the value stored there (patch up the list)
};

#endif//LINKEDLIST_HPP
