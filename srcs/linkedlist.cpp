#include "../hdrs/linkedlist.hpp"

LinkedList::Node::Node(std::string key, std::string data) {
    this->next = nullptr;
    this->data = data;
    this->key = key;
}

LinkedList::Node::~Node() {
    // implemented so you only have to delete the root
    Node* current = this;
    Node* tmp = this->next;
    while (tmp != nullptr) {
        delete current;
        current = tmp;
        tmp = current->next;
    }
}

void LinkedList::Node::setnext(Node* node) {
    this->next = node;
}

LinkedList::Node* LinkedList::Node::getnext() {
    return this->next;
}

std::string LinkedList::Node::getdata() {
    return this->data;
}

std::string LinkedList::Node::getkey() {
    return this->key;
}

LinkedList::LinkedList() {
    root = nullptr;
    length = 0;
}

std::string LinkedList::find(std::string key) { 
    Node* tmp = root;
    while(tmp != nullptr) {
        if (tmp->getkey() == key) {
            return tmp->getdata();
        }
        tmp = tmp->getnext();
    }
    return "Doesn't exist";
}
    
void LinkedList::add(std::string key, std::string value) {
    Node* node = new Node(key, value);
    if (root == nullptr) {
        root = node;
    } else {
        node->setnext(root);
        root = node;
    }
    length++;
}

std::string LinkedList::operator[] (std::string key) {
    Node* tmp = root;
    while (tmp != nullptr) {
        if (tmp->getkey() == key) {
            return tmp->getdata();
        }
        tmp = tmp->getnext();
    }

    return "Not found";
}

std::string LinkedList::remove(std::string key) {  
    Node* prev = root;
    Node* next = root->getnext();
    Node* curr = root;

    while (curr != nullptr) {
        if (curr->getkey() == key) break;

        prev = curr;
        curr = next;
        next = curr->getnext();
    }

    if (curr == nullptr) return "Not found";

    prev->setnext(next); // remove the current from loop (kinda jumping over it this way);

    std::string output = curr->getdata();
    curr->setnext(nullptr);
    delete curr;

    return output;
}
