#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include <sstream>


template <class Type>
struct Node
{
    Type data;
    Node <Type> * next;
};

template <class Type>
class LinkedList
std::ostream& operator<<(std::ostream& out, const LinkedList<Type>& list);

template <class Type>
class LinkedList {
    
    public:
    
    LinkedList();// Default constructor for the LinkedList.  Creates an empty list by setting front and back of the list to nulllptr
    ~LinkedList(); //Destructor for the LinkedList.  Creates an empty list by setting front and back of the list to nulllptr
    void insert(Type data); //Adds to the back of the list
    Type peek(int ndx); //Looks at an element at the given ndx value
    void remove(int ndx); //Removes an element at the given ndx position
    friend std::ostream& operator<< <>(std::ostream& out, const LinkedList<Type>& list); // Returns an output stream for displaying the LinkedList. Note, the declaration and definition may need an extra <> in there: std::ostream& operator<< <>(std::ostream& out, const LinkedList<Type>& list);
    
    protected:
    node <Type>* front;
    node <Type>* back;
    int count;

    
    
    ;}

#endif linkedlist_H