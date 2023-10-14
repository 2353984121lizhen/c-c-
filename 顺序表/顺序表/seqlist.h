#define _CRT_SECURE_NO_WARNINGS 1
#pragma once   //防止头文件重复
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#define N 100
//
////为了防止以后修改数据
//typedef int SLDataType;
//
////这个是静态顺序表
//typedef struct SeqList {
//	SLDataType a[N];
//	SLDataType size;  //表示数组存储的个数
//}SL;
//
////初始化
//void Init(SL* ps, SLDataType x);
////尾插
//void PushBack(SL* ps, SLDataType x);
////头插
//void PushHead(SL* ps, SLDataType x);
////尾删
//void PopBack(SL* ps, SLDataType x);
////头删
//void PopHead(SL* ps, SLDataType x);
//
//
////静态的特点:如果满了就不让插入  给多了造成内存空间浪费
////缺点:给多不知道多少合适




//为了防止以后修改数据
typedef int SLDataType;

//动态顺序表
typedef struct SeqList {
	SLDataType *a;  //改用成指针,用指针来指向动态空间
	SLDataType size;  //表示数组存储的个数
	int capacity;   //表示这个动态空间能存储的空间容量有多大
}SL;

//初始化
void Init(SL* ps);
//尾插:尾插指的是从数组尾部插入元素
void PushBack(SL* ps, SLDataType x);
//头插
void PushHead(SL* ps, SLDataType x);
//尾删
void PopBack(SL* ps);
//头删
void PopHead(SL* ps);
//检测内存空间
void CheckCapacity(SL* ps);
//查找这个值的位置  找到则返回这个熟的下标  找不到则返回-1
int Find(SL* ps, SLDataType x);
//指定位置下标插入
void CheckInsert(SL* ps, SLDataType pos);
void Insert(SL* ps, int pos, SLDataType x);
//指定位置删除
void Erase(SL* ps, int pos, SLDataType x);
//还要释放调不用的内存,防止内存泄露
void Destory(SL* ps);

//静态的特点:如果满了就不让插入  给多了造成内存空间浪费
//缺点:给多不知道多少合适