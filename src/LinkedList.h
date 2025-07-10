#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include <sstream>
// Ausha Homer

template <class Type>
struct Node
{
    Type data;
    Node <Type> * next;
};

template<class Type>
class LinkedList;

template <class Type>
std::ostream& operator<<(std::ostream& out, const LinkedList<Type>& list);

template<class Type>
class LinkedList {
    
    public:
        LinkedList();// Default constructor for the LinkedList.  Creates an empty list by setting front and back of the list to nulllptr
        ~LinkedList(); //Destructor for the LinkedList.  Creates an empty list by setting front and back of the list to nulllptr
        void insert(Type data); //Adds to the back of the list
        Type peek(int ndx); //Looks at an element at the given ndx value
        void remove(int ndx); //Removes an element at the given ndx position
        friend std::ostream& operator<< <>(std::ostream& out, const LinkedList<Type>& list); // Returns an output stream for displaying the LinkedList. Note, the declaration and definition may need an extra <> in there: std::ostream& operator<< <>(std::ostream& out, const LinkedList<Type>& list);
    
    protected:
        Node <Type>* front;
        Node <Type>* back;
        int count;
    
};

    template<class Type>
    LinkedList<Type>::LinkedList(){

        front = nullptr;
        back = nullptr;
        count = 0;
    };

    template<class Type>
    LinkedList<Type>::~LinkedList(){

        Node <Type>* temp = front;
        
        while (front != nullptr;)
        {
            temp = front;
            front = front->next;
            delete temp;

        }
    }

    template<class Type>
    void LinkedList<Type>::insert(Type data){
        Node<Type>temp*= new Node<Type>();
        temp->data = data;
        if (!front){
            this-> front = temp;
            this-> back = temp;
        }else {
            temp->next = nullptr;
            back->next = temp;
            back = temp;
        }

    };




#endif //LINKEDLIST_H