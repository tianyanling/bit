//sizeof相关问题
#include <iostream>
using namespace std;

int getSize(int data[]) {//此处的int data[]相当于指针int *data，占8个字节
	return sizeof(data);
}

int main() {
	int data1[] = { 1,2,3,4,5 };
	int size1 = sizeof(data1);

	int* data2 = data1;
	int size2 = sizeof(data2);//int *表示指针，在64位下占8个字节

	int size3 = getSize(data1);

	printf("%d, %d, %d", size1, size2, size3);
	return 0;
}