#include <iostream>
#include "myStack.h"
using namespace std;
int main() {
	MyStack<int> s1;
	s1.push(2);
	cout<<s1.top()<<endl;
	cout<<s1.min()<<endl;
	s1.push(3);
	cout<<s1.top()<<endl;
	cout<<s1.min()<<endl;
	s1.pop();
	return 0;
}
