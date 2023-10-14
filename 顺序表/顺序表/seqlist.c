#define _CRT_SECURE_NO_WARNINGS 1
#include "seqlist.h"
//初始化
void Init(SL* ps){
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;

}
//释放内存
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

//尾插
void PushBack(SL* ps, SLDataType x) {
	//一进来,数组中没有空间
	//进行扩容
	CheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}
//头插
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
//尾删
void PopBack(SL* ps) {
	//ps->a[ps->size - 1] = 0;    这部多余了并且没有用,举例子:原来的数据就是0的话,那这里的代码就会失效

	if (ps->size > 0) {
		ps->size--;
	}
	
	//ps->size  表示有效读取数字的个数,只需要将ps->size--,读取有效数字前移,原来能读取5个数字,
	//现在只能读取4个数据
}
//头删
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
//查找指定数字的下标
int Find(SL* ps, SLDataType x){
	bool flag = false;
	if (ps->a == NULL) {
		printf("该数组为空\n");
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
		printf("这个数字在该数组中没有\n");
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
//指定位置插入
void Insert(SL* ps, int pos, SLDataType x) {
	//检查空间是否足够
	CheckCapacity(ps);
	if (pos >= ps->size) {
		printf("超出数组范围,数组有效范围为0-%d", ps->size);
	}
	else if (pos < 0) {
		printf("输入错误\n");
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