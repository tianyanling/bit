#ifndef _SORT_H_
#define _SORT_H_
#define FILE_BUFFER_LENGTH 30000

void BubbleSort(int *src, int n);
void SelectSort(int *src, int n);
void InsertSort(int *src, int n);
void ShellSort(int *src, int n);
void MergeSort(int *src, int n);
void QuickSort(int *src, int n);
void QuickSortNonR(int *src, int n);
void HeapSort(int* src, int n);
#endif /*SORT_H_*/