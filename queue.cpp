/***queue.cpp***/
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Queue.h"

myqueue::myqueue() //default constructor
{
    nodelimit=limit; //sets default node limit as 3
    nofnodes=0;  //the are no nodes yet, so number of nodes=0
    head=0;      //nothing in queue yet.
    cout<<"Queue size: "<< nodelimit<<endl;
    //prints the size of the queue that has been created;
}

myqueue::myqueue(int limit) //constructor
{
    nodelimit=limit; //sets node limit as per user
    nofnodes=0;      //the are no nodes yet, so number of nodes=0
    head=0;          //nothing in queue yet.
    cout<<"Queue size: "<<nodelimit<<endl;
    //prints the size of the queue that has been created;
}

bool myqueue::isEmpty() //checks if the queue is empty
{
    if(nofnodes<=0) return true;
    else return false;
}

bool myqueue::isFull() //checks if the queue is full
{
    if(nofnodes>=nodelimit) return true;
    else return false;
}

void myqueue::push(int num)
{
    //inserts an element at  end of the queue

    if(!isFull()) //if queue is not full
    {
        if(!head) //if head is empty or first element in queue
        {
            head=new Node; //memory allocation to head
            head->val=num; //stores the value to head
            head->next=0;  //end of queue
            nofnodes++; //increments the number of nodes
            cout<<"Pushed in "<<num<<endl;
            //prints the value pushed into the queue
        }
        else
        {
            Node *current, *tmp; //temporary node pointers
            for(current=head; current->next; current=current->next);
            //this for loop finds the end of the queue.
            tmp=new Node; //memory allocation to tmp, to store new value
            tmp->val=num; //stores th new value int tmp
            tmp->next=0;  //end of queue
            current->next=tmp; //links tmp to last element in the queue
                               //now tmp becomes the last element
            nofnodes++; //increments the number of nodes
            cout<<"Pushed in "<<num<<endl;
            //prints the value pushed into the queue
        }
    }
    //if queue is full
    else cout<<"Queue is Full!!"<<endl;
}

void myqueue::pop() //removes front/first element in the queue
{
    if(!isEmpty()) //if queue is not empty
    {
        Node *tmp; //temporary node pointer
        tmp=head->next; //stores the next element of head
        cout <<"Popped "<< head->val<<endl;
        //prints the number to be removed;
        delete head; //frees the memory allocated to head
        head=tmp;    //makes tmp (head->next) to be the begining of the queue
        nofnodes--;  //decrements number of nodes
    }
    //if queue is empty
    else cout<<"Queue is Empty!!"<<endl;
}

void myqueue::print()
{
    Node *current; //temporary node pointer
    if(isEmpty())  //if queue is empty
    {
        cout<<"Queue is Empty!!"<<endl;
        //prints that queue is empty
        return; //end of function
    }
    //else
    for(current=head; current; current=current->next)
    {
        cout << current->val;
        if(current->next) cout <<"-->";
    }
    cout<<"\n";
    //prints the queue
}
