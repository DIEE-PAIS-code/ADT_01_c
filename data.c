//
// Created by Luca Didaci on 06/11/2018.
//

#include "data.h"
#include <stdio.h>
#include <stdlib.h>



/* Internal representation of MyData. */

struct MyData {
    int v1;
    int v2;
};

void showMyData(MyDataPtr p){
    printf("%d - %d\n",p->v1, p->v2 );
}

void setMyData(MyDataPtr p, int v1, int v2){
    p->v1=v1;
    p->v2=v2;
}

MyDataPtr createMyData(){
    return malloc(sizeof(MyDataPtr ));
}

void destroyMyData (MyDataPtr p){
    free(p);
}
