#define MAX_SIZE 100

#include <iostream>
using namespace std;

// 静态顺序表
typedef struct{
    int data[MAX_SIZE];
    int length;
    int maxsize; // 最大容量
}sqlist;

void InitialList(sqlist &L); // 初始化顺序表
void DisplayList(sqlist L); // 展示顺序表元素
bool InsertList(sqlist &L, int i, int e); // 顺序表插入元素
void DeleteElem(sqlist &L, int i, int &e); // 删除指定位置元素，并返回该元素的值
int LocateElem(sqlist L, int e); // 查找指定元素，并返回其位置


