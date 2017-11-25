#include "LL.h"
#include "Node.cpp"

using namespace std;

// Default constructor, set head to NULL
LL::LL() {
 head = NULL;
}

// Copy constructor
LL::LL(const LL& A) {
 Node* cursorA = NULL;
 Node* cursor = NULL;
 if(A.head == NULL) {head=NULL;}
 Node* head = new Node;
 head->set_data(A.head->get_data());
 head->set_next(cursor);
 for(cursorA=A.head->get_next(); cursorA!=NULL; cursorA=cursorA->get_next()) {
  Node* temp = new Node;
  temp->set_data(cursorA->get_data());
  temp = cursor->get_next(); //?
  cursor=cursor->get_next();
 }
}

// Destructor
// Identical to clear function..
LL::~LL() {
 Node* cursor = head;
 while(cursor!=NULL) {
  Node* next=cursor->get_next();
  delete cursor;
  cursor = next;
 }
 head = NULL;
}

// Assignment operator overload
LL& LL::operator=(const LL& A) {
 if(this == &A) return *this;
 else {
  clear();
  Node* head = new Node;
  Node* cursor;
  head->set_data(A.head->get_data());
  head->set_next(cursor);
  Node* cursorA = A.head->get_next();
  while(cursorA!=NULL) {
   Node* temp = new Node;
   temp->set_data(cursorA->get_data());
   cursorA=cursorA->get_next();
   Node * next;
   cursor->set_next(next);
   cursor=cursor->get_next();
  }
  return *this;
 } 
}

// Insert BEFORE current ith node in list. [1st node is at index 0,
// last node is at index size()-1, append by insert(c,size())]<<endl;
void LL::insert(char c,unsigned int i) {
 if(i==1) {
  Node* newNode = new Node;
  newNode->set_data(c);
  newNode->set_next(head);
  head = newNode;
 }
 else {
  Node* newNode = new Node;
  newNode->set_data(c);
  Node* cursor;
  Node* next;
  cursor = head;
  int j;
  next=cursor->get_next();
  for(j=0; i-2>j; j++){
   cursor=cursor->get_next();
   next=cursor->get_next();
  }
 cursor->set_next(newNode);
 newNode->set_next(next);
 }
}

// Remove the ith node in list, return the removed char.
char LL::remove(unsigned int i) {
 if (i==1) {
  Node* cursor;
  cursor = head;
  Node* next = cursor->get_next();
  char c;
  c=cursor->get_data();
  head = next;
  return c;
 }
 else {
  Node* cursor;
  cursor = head;
  Node* next = cursor->get_next();
  int j;
  for(j=0; i-2>j; j++){
   cursor=cursor->get_next();
   next=cursor->get_next();
  }
  char c;
  c = next->get_data();
  cursor->set_next(next->get_next());
  delete next;
  return c;
 }
}

// Return the char in the ith node in list.
char LL::get(unsigned int i) const {
 Node* cursor = head;
 int j;
 for(int j;i-1>j;j++) {
  cursor=cursor->get_next();
 }
 return cursor->get_data();
}


// Return the current number of nodes in the list, 0 means empty.
unsigned int LL::size() const {
 Node* cursor = NULL;
 int size = 0;
 for(cursor=head; cursor!=NULL; cursor=cursor->get_next()) {
  size+=1;
 }
 return size;
}

// Clear the list by deallocating all of the nodes and setting head to NULL
void LL::clear() {
 Node* cursor = head;
 while(cursor!=NULL) {
  Node* next=cursor->get_next();
  delete cursor;
  cursor = next;
 }
 head = NULL;
}

// Print characters in LL
ostream& operator<<(ostream& out, const LL& A) {
 Node* cursor = NULL;
 for(cursor=A.head; cursor!=NULL; cursor=cursor->get_next()) {
  out << cursor->get_data();
 }
 return out;
}

// Returns true if the lists are equal char-by-char, false otherwise.
bool operator==(const LL& A, const LL& B) {
 Node* A_cursor=A.head;
 Node* B_cursor=B.head;
 if (A.size()!=B.size()) {return false;}  //If lengths are not equal, then not equal
 int i =0;
 for(int i=0;i<A.size();i++) {           //Otherwise, compare individual items in list
  if (A_cursor->get_data() == B_cursor->get_data()) {
   A_cursor=A_cursor->get_next();
   B_cursor=B_cursor->get_next();
  }
  else {return false;}
 }
 return true;
}
