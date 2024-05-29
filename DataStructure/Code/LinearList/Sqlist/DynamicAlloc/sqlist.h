#define MaxSize 100
#define InitialSize 20

// 动态顺序表
typedef struct{
    int *data;
    int length;
}sqlist;

void InitialList(sqlist &L);