#define _CRT_SECURE_NO_WARNINGS 1

#include "seqlist.h"

/*
���Ա�:��n��������ͬ���Ե�����Ԫ�ص���������,���Ա���һ����ʵ���й㷺ʹ�õ����ݽṹ,���������Ա�:˳���,����,ջ,����,�ַ���

���Ա����߼��������Խṹ,Ҳ����˵������һ��ֱ��,����������ṹ�ϲ���һ����������,���Ա��������ϴ洢,ͨ�����������ʽ�ṹ��
ʽ�ϴ洢*/


//1.˳���:�����Ͼ�������  ��Ϊ��̬�Ͷ�̬  ���������洢��
//�������ĵ�ַ�ڴ�洢,������Ծ
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
	//�ͷŵ��ڴ�
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

	//test1();   //����βɾ��β��,���д�ӡ
	//test02();    //����ͷ��
	test03();
	return 0;
}