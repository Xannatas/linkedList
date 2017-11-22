#include "LL.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
 LL A;
 char c = 'c';
 char a='a';
 char b='b';
 char s='s';
 cout <<A.size()<<endl;
// cout <<A<<endl;
 A.insert(b,1);
 A.insert(a,1);
 A.insert(c,1);
 A.insert(s,2);
 A.insert(s,5);
// A.insert(b,3);
// cout <<A.size()<<endl;
// A.remove(2);
// A.clear();
// cout<<A.size()<<endl;
 cout <<A.remove(2)<<endl;
// A.remove(1);
// cout <<A.size()<<endl;
 cout <<A<<endl;
 cout <<A.get(2)<<endl;
 cout<<A.get(1)<<endl;

 LL B;
 B.insert(c,1);
 B.insert(a,2);
 B.insert(s,3);
 B.insert(b,3);
 cout<<B<<endl;
 cout<<(A==B)<<endl;
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
 
 /*
 //Assignment operator issues-segmentation fault
 cout<<A<<endl;
 cout<<B<<endl;
 //A=B;
 //cout<<A<<endl;
 */
}
