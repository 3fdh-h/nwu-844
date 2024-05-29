#include "sqlist.h"
#include <stdlib.h>

void InitialList(sqlist &L){
    L.data = (int*)malloc(InitialSize*sizeof(int));
    L.length = 0;
}