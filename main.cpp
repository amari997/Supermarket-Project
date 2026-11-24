#include <iostream>
#include <string>
using namespace std;

struct Product {
    string ProductName;
    int ProductCode;
    float Price;
};

struct Location {
    string sectionName;
    int AisleNumber;
    int ShelfNumber;
    int ProductCode;
};

// Each node stores one product, its location, and a pointer to the next node.
struct Node {
    Product product;
    Location location;
    Node* next;
}; 
Node *head = NULL, *tail = NULL;
