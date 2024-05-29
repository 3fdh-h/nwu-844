#include <iostream>
#include "sqlist.h"
using namespace std;

// 初始化顺序表
void InitialList(sqlist& L){
    for(int i=0; i<MAX_SIZE; i++){
        L.data[i] = 0;
    }
    L.length = 0;  // 初始化链表长度为0
}

// 打印顺序表数据项
void DisplayList(sqlist L){
    if(L.length==0) cout << "Sqlist is null!" << endl;
    for(int i=0; i<L.length; i++){
        if(i!=L.length-1)
            cout << L.data[i] << "-";
        else
            cout << L.data[i] << endl;
    }
}

// 向顺序表L第i个位置插入元素e
bool InsertList(sqlist &L, int i, int e){
    // 合法性判断
    if(i<1 || i>L.length+1){
        cout << "The location to insert is invalid" << endl;
        return false;
    }
    if(L.length>=MAX_SIZE){
        cout << "The Sqlist is full that can't insert any more" << endl;
        return false;
    }
    // 将i后的所有元素后移一位
    for(int j=L.length; j>=i;j--){
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}

// 删除顺序表L中第i个位置的元素，返回被删除元素值
void DeleteElem(sqlist &L, int i, int &e){
    // 合法性判断
    if(i<1 || i>L.length){
        cout << "The location to delete is invalid" << endl;
        return;
    }
    e = L.data[i-1];
    // 将i后的所有元素前移一位
    for(int j=i; j<L.length; j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
}

// 查找顺序表L中元素e的位置，返回其位序，若不存在则返回0
int LocateElem(sqlist L, int e){
    for(int i=0; i<L.length; i++){
        if(L.data[i] == e)
            return i+1;  // 返回位序，从1开始计数
    }
    return 0;
}