#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*����:������������,ȱ��һ������,�ҳ��������*/

//˼·1:�Ȱ�ǰ��������,0-n��Ԫ�����ж�������,Ȼ���ȥ�����е�Ԫ��,��ֵ����Ҫ�ҵ�����
//int main() {
//	int arr[9] = { 5,2,1,9,8,7,6,3,0 };
//	int i = 0; 
//	int sum = 0;
//	for (i = 0; i < 10; i++) {
//		sum += i;
//	}
//	int j = 0; 
//	int arr_sum = 0;
//	for (j = 0; j < 8; j++) {
//		arr_sum += arr[j];
//	}
//	printf("%d \n", sum);
//	printf("%d \n", arr_sum);
//	int ret = sum - arr_sum;
//	printf("ȷʵ������Ϊ%d \n", ret);
//	return 0;
//}


//˼·2:ȡ���,����������ͬ������ȡ������0,,�ȸ�0-n�е���������ȡ���,Ȼ��������е�����Ԫ��ȡ���,
//���ȡ���������־���ȷʵ������,ԭ����,��ͬ������ȡ���ͻ�Ϊ0,0ȡ�κ����ֵ����Ϊ�κ�����

//int missingnumber(int* arr, int numsize) {
//	int x = 0;
//	int i = 0; 
//	for (i = 0; i <= numsize; i++) {
//		x ^= i;
//	}
//	for (i = 0; i <= numsize - 1; i++) {
//		x ^= arr[i];
//	}
//	return x;
//}
//
//
//int main() {
//	int arr[9] = { 5,2,1,9,8,7,6,3,0 };
//	int ret = missingnumber(arr,9);
//	printf("ȷʵ������Ϊ%d \n", ret);
//	return 0;
//}


/*����:�������е�Ԫ������*/
// 1 2 3 4 5 6 7 8 9 �����Ϊǰ�úͺ���
// ��ǰ�ò�������,Ȼ���ٽ����ò�������
// ���������������,Ȼ��͵õ����������������
//
//void reverse(int* arr, int left, int right) {
//	
//	while (left < right) {
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		++left;
//		--right;
//	}
//}
//
//
//void rorate(int* arr, int numsize, int k) {
//	if (k >= numsize)
//		k %= numsize;
//	//����ǰ�벿��
//	reverse(arr, 0, numsize - k - 1);
//	//���ú�벿��
//	reverse(arr,  numsize - k, numsize - 1);
//	//��������
//	reverse(arr, 0,numsize - 1 );
//
//}
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	rorate(arr, 9, 3);
//	for (int i = 0; i < 9; i++) {
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}

