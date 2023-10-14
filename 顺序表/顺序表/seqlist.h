#define _CRT_SECURE_NO_WARNINGS 1
#pragma once   //��ֹͷ�ļ��ظ�
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#define N 100
//
////Ϊ�˷�ֹ�Ժ��޸�����
//typedef int SLDataType;
//
////����Ǿ�̬˳���
//typedef struct SeqList {
//	SLDataType a[N];
//	SLDataType size;  //��ʾ����洢�ĸ���
//}SL;
//
////��ʼ��
//void Init(SL* ps, SLDataType x);
////β��
//void PushBack(SL* ps, SLDataType x);
////ͷ��
//void PushHead(SL* ps, SLDataType x);
////βɾ
//void PopBack(SL* ps, SLDataType x);
////ͷɾ
//void PopHead(SL* ps, SLDataType x);
//
//
////��̬���ص�:������˾Ͳ��ò���  ����������ڴ�ռ��˷�
////ȱ��:���಻֪�����ٺ���




//Ϊ�˷�ֹ�Ժ��޸�����
typedef int SLDataType;

//��̬˳���
typedef struct SeqList {
	SLDataType *a;  //���ó�ָ��,��ָ����ָ��̬�ռ�
	SLDataType size;  //��ʾ����洢�ĸ���
	int capacity;   //��ʾ�����̬�ռ��ܴ洢�Ŀռ������ж��
}SL;

//��ʼ��
void Init(SL* ps);
//β��:β��ָ���Ǵ�����β������Ԫ��
void PushBack(SL* ps, SLDataType x);
//ͷ��
void PushHead(SL* ps, SLDataType x);
//βɾ
void PopBack(SL* ps);
//ͷɾ
void PopHead(SL* ps);
//����ڴ�ռ�
void CheckCapacity(SL* ps);
//�������ֵ��λ��  �ҵ��򷵻��������±�  �Ҳ����򷵻�-1
int Find(SL* ps, SLDataType x);
//ָ��λ���±����
void CheckInsert(SL* ps, SLDataType pos);
void Insert(SL* ps, int pos, SLDataType x);
//ָ��λ��ɾ��
void Erase(SL* ps, int pos, SLDataType x);
//��Ҫ�ͷŵ����õ��ڴ�,��ֹ�ڴ�й¶
void Destory(SL* ps);

//��̬���ص�:������˾Ͳ��ò���  ����������ڴ�ռ��˷�
//ȱ��:���಻֪�����ٺ���