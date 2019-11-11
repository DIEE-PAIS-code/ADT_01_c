//
// Created by Luca Didaci on 06/11/2018.
//

#ifndef ADT_01_DATA_H
#define ADT_01_DATA_H


// PUBLIC

/* A pointer to an incomplete type
 * (hides the implementation details). */
typedef struct MyData *MyDataPtr;


void showMyData(MyDataPtr p);
void setMyData(MyDataPtr p, int v1, int v2);


MyDataPtr createMyData();
void destroyMyData (MyDataPtr p);

#endif //ADT_01_DATA_H
