/***queue.h***/
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class Node //a queue element.
{
public:
    int val; //stores a value
    Node *next; //pointer to the next element
};

class myqueue
{
    private:
        int nofnodes;  //number of elements in the queue
        int nodelimit; //node limit
        Node *head;    //the front/first element in the queue

    public:
        myqueue(); //default contructor
        myqueue(int limit); //constructor
        ~myqueue(){}; //distructor
        bool isEmpty(); //checks if the queue is empty
        bool isFull(); //checks if the queue is full
        void push(int num); //inserts an element at the end of queue
        void pop(); //removes front/first element in the queue
        void print(); //prints the queue

};

#endif // STACK_H_INCLUDED
