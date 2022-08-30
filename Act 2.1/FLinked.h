//Act 2.1 Implementación de un ADT de estructura de datos lineales 
//Hector Robles Villareal A01634105
//Lunes 27 de septiembre del 2021

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
    void create(int index, T data){
        node<T>* temp = new node<T>;
        node<T>* temp2 = first;
        temp->data = data;
        if(index ==0){
            temp->next = first;
            first = temp;
        }
        else{ 
            for(int i = 0; i < index-1; i++){
                temp2 = temp2->next;
            }
            temp->next = temp2->next;
            temp2->next = temp;
        }
    }   

	T read(int index) {
		if (index == 0) {
			return this->first->data;
		}
		else {
			node<T>* curr = this->first;
			for (int i = 0; i < index; i++) {
				curr = curr->next;
			}
			return curr->data;
		}
	}
    void update(int index, T data){
        node<T>* temp1 = first;
        if(index == 0){
            first->data = data;
         }
        else if(index == 1){
            first->next->data = data;
        }     
        else if (index > 1 && temp1-> next != NULL){
            for(int i = 0; i < index; i++){
                temp1 = temp1->next; 
            }
            temp1->data = data;
        }
        else{
            node<T>* temp2 = temp1;
            for(int i = 0; i < index; i++){
                temp1 = temp1->next;   
            }
            temp1->data = data;
            temp1->next = NULL;
            last = temp1;
        }
    }

   void del(int index){
        node<T>* temp1 = first;
        if (index == 0){
            first = temp1->next;
            delete(temp1);
        }
        else{
            
            for(int i = 0; i < index-1; i++){
                temp1 = temp1->next;
            }
            node<T>* temp2 = temp1->next;
            temp1->next = temp2->next;
            delete(temp2);
        }
    }
    

};
