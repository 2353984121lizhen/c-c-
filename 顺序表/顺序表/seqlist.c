#define _CRT_SECURE_NO_WARNINGS 1
#include "seqlist.h"
//��ʼ��
void Init(SL* ps){
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;

}
//�ͷ��ڴ�
void Destory(SL* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void CheckCapacity(SL* ps){
	if (ps->size == ps->capacity) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* temp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (temp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}

		ps->a = temp;
		ps->capacity = newcapacity;


	}
}

//β��
void PushBack(SL* ps, SLDataType x) {
	//һ����,������û�пռ�
	//��������
	CheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}
//ͷ��
void PushHead(SL* ps, SLDataType x) {
	int end = ps->size - 1;

	CheckCapacity(ps);


	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}
//βɾ
void PopBack(SL* ps) {
	//ps->a[ps->size - 1] = 0;    �ⲿ�����˲���û����,������:ԭ�������ݾ���0�Ļ�,������Ĵ���ͻ�ʧЧ

	if (ps->size > 0) {
		ps->size--;
	}
	
	//ps->size  ��ʾ��Ч��ȡ���ֵĸ���,ֻ��Ҫ��ps->size--,��ȡ��Ч����ǰ��,ԭ���ܶ�ȡ5������,
	//����ֻ�ܶ�ȡ4������
}
//ͷɾ
void PopHead(SL* ps) {
	
	if (ps->size > 0) {
		int begin = 1;
		while (begin < ps->size) {
			ps->a[begin - 1] = ps->a[begin];
			begin++;
		}
		ps->size--;
	}
}
//����ָ�����ֵ��±�
int Find(SL* ps, SLDataType x){
	bool flag = false;
	if (ps->a == NULL) {
		printf("������Ϊ��\n");
		return -1;
	}
	else {
		int i = 0;
		for (i = 0; i < ps->size; i++) {
			if (ps->a[i] == x) {
				flag =  true;
				return i;
			}
		}
	}
	if (flag != true) {
		printf("��������ڸ�������û��\n");
		return -1;
	}
}

void CheckInsert(SL* ps, SLDataType pos) {
	if (pos >= ps->capacity) {
		int newcapacity = pos + 1;
		SLDataType* temp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (temp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = temp;
		ps->capacity = newcapacity;
		
	}
}
//ָ��λ�ò���
void Insert(SL* ps, int pos, SLDataType x) {
	//���ռ��Ƿ��㹻
	CheckCapacity(ps);
	if (pos >= ps->size) {
		printf("�������鷶Χ,������Ч��ΧΪ0-%d", ps->size);
	}
	else if (pos < 0) {
		printf("�������\n");
	}
	else {
		CheckCapacity(ps);
		int end = ps->size;
		while (end >= pos) {
			ps->a[end + 1] = ps->a[end];
			end--;
		}
		ps->a[pos] = x;
	}
}