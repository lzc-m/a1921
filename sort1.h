#ifndef _sort1_
#define _sort1_
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  
#define N 20  
void bubble1 (int a[], int n);
void bubble2 (int a[], int n);
void bubble3 (int a[], int n);
void InsertSort (int a[],int n);
void SelectSort (int a[], int n);
int Partition(int a[], int low, int high);
int Partition2(int a[],int low, int high);
void QSort(int a[], int low, int high);
void QuickSort(int a[], int n);

#endif
