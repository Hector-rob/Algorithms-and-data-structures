#pragma once
#include <iostream>
using namespace std;

template<class T>
struct node {
	node<T>* next;
	T data;
};



template<class T>
class FLinked
{
public:
	node<T>* first;
	node<T>* last;
	FLinked<T>() {
		first = NULL;
		last = NULL;
	}

	void add(T data) {
		if (!first) {
			// The list is empty
			first = new node<T>;
			first->data = data;
			first->next = NULL;
			last = first;
		}
		else {
			// The list isn't empty
			if (last == first) {
				// The list has one element
				last = new node<T>;
				last->data = data;
				last->next = NULL;
				first->next = last;
			}
			else {
				// The list has more than one element
				node<T>* insdata = new node<T>;
				insdata->data = data;
				insdata->next = NULL;
				last->next = insdata;
				last = insdata;
			}
		}
	}

	T get(int index) {
		if (index == 0) {
			// Get the first element
			return this->first->data;
		}
		else {
			// Get the index'th element
			node<T>* curr = this->first;
			for (int i = 0; i < index; ++i) {
				curr = curr->next;
			}
			return curr->data;
		}
	}

	T operator[](int index) {
		return get(index);
	}

};
