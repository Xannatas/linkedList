#include "LL.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
 
 //Create the Linked List A.
 //Initialize some characters to be inserted into the list.
 //Run some minor tests on character linked list A.
 LL A;
 char c = 'c';
 char a = 'a';
 char b = 'b';
 char s = 's';
 
 cout <<A.size()<<endl;
 
 A.insert(b,1);
 A.insert(a,1);
 A.insert(c,1);
 A.insert(s,2);
 A.insert(s,5);

 cout <<A.remove(2)<<endl;

 cout <<A<<endl;
 cout <<A.get(2)<<endl;
 cout <<A.get(1)<<endl;

 
 //Create the Linked List B.
 //Initialize some characters to be inserted into the list.
 //Run some minor tests on character linked list B.
 LL B;
 B.insert(c,1);
 B.insert(a,2);
 B.insert(s,3);
 B.insert(b,3);
 
 cout<<B<<endl; 
 cout<<(A==B)<<endl;  //Testing equality
 
 B.remove(1);
 
 cout<<B<<endl;
 cout<<(A==B)<<endl;
 
 B.insert(b,1);
 
 cout<<B<<endl;
 cout<<(A==B)<<endl;
 
 B.remove(1);
 B.insert(c,1);
 B.remove(3);
 B.insert(c,3);
 
 cout<<B<<endl;
 cout<<(A==B)<<endl;
}
