#define _CRT_SECURE_NO_WARNINGS 1

#include "seqlist.h"

/*
线性表:是n个具有相同特性的数据元素的有限序列,线性表是一种在实际中广泛使用的数据结构,常见的线性表:顺序表,链表,栈,队列,字符串

线性表在逻辑上是线性结构,也就是说连续的一条直线,但是在物理结构上并不一定是连续的,线性表在物理上存储,通常以数组和链式结构形
式上存储*/


//1.顺序表:本质上就是数组  分为静态和动态  数据连续存储的
//用连续的地址内存存储,不能跳跃
void print(SL* ps) {
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void test1() {
	SL s1;
	Init(&s1);
	PushBack(&s1,1);
	PushBack(&s1,2);
	PushBack(&s1,3);
	PushBack(&s1,4);
	PushBack(&s1,5);
	PopBack(&s1);
	PopBack(&s1);
	PopBack(&s1);
	PopBack(&s1);
	PopBack(&s1);
	PopBack(&s1);
	PopBack(&s1);


	PushBack(&s1, 2);
	PushBack(&s1, 3);
	PushBack(&s1, 4);
	PushBack(&s1, 5);
	print(&s1);
	//释放掉内存
	Destory(&s1);
}

void test02() {
	SL s1;
	Init(&s1);
	PushBack(&s1, 1);
	PushBack(&s1, 2);
	PushBack(&s1, 3);
	PushBack(&s1, 4);
	PushBack(&s1, 5);
	print(&s1);
	PushHead(&s1, -10);
	PushHead(&s1, -5);
	PushHead(&s1, -89);
	PushHead(&s1, -46);
	PushHead(&s1, -78);
	PopHead(&s1);
	PopHead(&s1);
	PopHead(&s1);
	PopHead(&s1);



	print(&s1);
	Destory(&s1);

}

void test03() {
	SL s1;
	Init(&s1);
	
	PushBack(&s1, 1);
	PushBack(&s1, 2);
	PushBack(&s1, 3);
	PushBack(&s1, 4);
	PushBack(&s1, 5);
	Insert(&s1, 7, 9);
	print(&s1);
}

int main() {

	//test1();   //测试尾删和尾插,还有打印
	//test02();    //测试头插
	test03();
	return 0;
}