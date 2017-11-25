#ifndef LL_H
#define LL_H
#include <iostream>
#include "Node.h"

using namespace std;

class LL {
  //Freind Declarations
  //Print characters in LL
  friend ostream& operator<<(ostream&, const LL&);

  //Returns true if the lists are equal char-by-char, false otherwise.
  friend bool operator==(const LL&, const LL&);
 
  public:
    // Default constructor, set head to NULL
    LL();

    // Copy constructor
    LL(const LL&);

    // Destructor
    ~LL();

    // Assignment operator overload
    LL& operator=(const LL&);

    // Insert BEFORE current ith node in list. [1st node is at index 0,
    // last node is at index size()-1, append by insert(c,size())]
    void insert(char,unsigned int i);

    // Remove the ith node in list, return the removed char
    char remove(unsigned int i);

    // Return the char in the ith node in list.
    char get(unsigned int i) const;

    // Return the current number of nodes in the list, 0 means empty.
    unsigned int size() const;

    // Clear the list by deallocating all of the nodes and setting head to NULL
    void clear();

  private:
    // Lists's head value
    Node *head;

};

#endif
