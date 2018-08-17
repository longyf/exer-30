#ifndef MY_STACK_H
#define MY_STACK_H
#include <iostream>
#include <stdexcept>
#include <stack>
using namespace std;

template <class T>
class MyStack {
	public:
		void push(T val);
		void pop();
		T top();
		T min();

	private:
		stack<T> data;
		stack<T> smin;
};

template <class T>
void MyStack<T>::push(T val) {
	data.push(val);
	if (smin.empty()) smin.push(val);
	else {
		if (val < smin.top()) smin.push(val);
		else smin.push(smin.top());
	}
}

template <class T>
void MyStack<T>::pop() {
	if (data.empty() || smin.empty() ) throw runtime_error("Empty stack.");
	data.pop();
	smin.pop();
}

template <class T>
T MyStack<T>::top() {
	if (data.empty()) throw runtime_error("Empty stack.");
	else return data.top();
}

template <class T>
T MyStack<T>::min() {
	if (smin.empty()) throw runtime_error("Empty stack.");
	else return smin.top();
}
#endif
