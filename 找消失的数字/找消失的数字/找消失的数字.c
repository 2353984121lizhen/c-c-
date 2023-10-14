#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*需求:在乱序数组中,缺少一个数字,找出这个数字*/

//思路1:先把前面数组中,0-n个元素所有都加起来,然后减去数组中的元素,差值就是要找的数字
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
//	printf("确实的数字为%d \n", ret);
//	return 0;
//}


//思路2:取异或,异或的性质相同的数字取异或会变成0,,先给0-n中的所有数字取异或,然后给数组中的所有元素取异或,
//最后取出来的数字就是确实的数字,原理是,相同的数字取异或就会为0,0取任何数字的异或都为任何数字

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
//	printf("确实的数字为%d \n", ret);
//	return 0;
//}


/*需求:将数组中的元素左旋*/
// 1 2 3 4 5 6 7 8 9 将其分为前置和后置
// 将前置部分逆序,然后再将后置部分逆序
// 最后将整个数组逆序,然后就得到了这个左旋的数组
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
//	//逆置前半部分
//	reverse(arr, 0, numsize - k - 1);
//	//逆置后半部分
//	reverse(arr,  numsize - k, numsize - 1);
//	//逆置整体
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

