/***queueMain.cpp***/
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "queue.h"
int main()
{
    //freopen("Qout.txt", "w", stdout);
    myqueue lst;
    lst.push(100);
    lst.push(60);
    lst.push(15);
    lst.push(9);
    lst.print();
    lst.pop();
    lst.pop();
    lst.pop();
    lst.pop();
    lst.print();
    return 0;

}

/*
//Output:

Queue size: 3
Pushed in 100
Pushed in 60
Pushed in 15
Queue is Full!!
100-->60-->15
Popped 100
Popped 60
Popped 15
Queue is Empty!!
Queue is Empty!!

*/
