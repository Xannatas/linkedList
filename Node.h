#ifndef NODE_H
#define NODE_H

class Node {
  public:
    // Default constructor, set next to NULL
    Node();

    // 2 arg constructor, sets char, and next
    Node(char, Node*);
    
    //Get data of given node.
    char get_data();
    
    //Set data of given node, takes a character arg.
    void set_data(char);
    
    //Get data of the node after the given node, takes Node* arg.
    Node* get_next();
  
    //Set data of the node after the given node, takes Node* arg.
    void set_next(Node*);

  private:
    //Value of the character c
    char c;
    
    //Value of the next node
    Node* next;

};

#endif
