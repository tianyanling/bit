//sizeof�������
#include <iostream>
using namespace std;

int getSize(int data[]) {//�˴���int data[]�൱��ָ��int *data��ռ8���ֽ�
	return sizeof(data);
}

int main() {
	int data1[] = { 1,2,3,4,5 };
	int size1 = sizeof(data1);

	int* data2 = data1;
	int size2 = sizeof(data2);//int *��ʾָ�룬��64λ��ռ8���ֽ�

	int size3 = getSize(data1);

	printf("%d, %d, %d", size1, size2, size3);
	return 0;
}