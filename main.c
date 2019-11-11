#include <stdio.h>
#include "data.h"

int main() {

    MyDataPtr p;

    // *p; error: incomplete definition of type 'struct MyData'

    p=createMyData();

    setMyData(p, 10, 20);
    showMyData( p);
    destroyMyData(p);

    return 0;
}