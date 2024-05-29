// #include <stdio.h>
#include <iostream>
#include "sqlist.h"
using namespace std;

int main()
{
    sqlist L;       // 定义一个顺序表
    InitialList(L); // 初始化顺序表
    cout << "---Initial the sqlist---" << endl;
    InsertList(L, 1, 1); // 在第1个位置插入1
    InsertList(L, 2, 2); // 在第2个位置插入2
    InsertList(L, 3, 3); // 在第3个位置插入3
    InsertList(L, 4, 4); // 在第4个位置插入4
    InsertList(L, 5, 5); // 在第5个位置插入5
    cout << "---Finish inserting element---" << endl;
    DisplayList(L);
    int del_elem;
    DeleteElem(L, 1, del_elem); // 删除第一个元素
    cout << "---Delete the first element--- " << endl
         << del_elem << endl;
    DisplayList(L); // 打印顺序表
    cout << "---Search the location of number 2 in the sqlist---" << endl;
    cout << LocateElem(L, 12) << endl; // 查找元素2的位置
    return 0;
}