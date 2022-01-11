#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//void Inite(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Inite(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名）计算的是整个数组的大小，单位是字节 
//	////2.&数组名，数组名代表整个数组，取出的是整个数组的地址
//	//printf("%d\n", *arr);//arr是首元素地址
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//与printf("%p\n", &arr);结果虽然一致，但是意义不同
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//void bubble_sort(int arr[],int n)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	int m;
//	for (i=0;i<n-1;i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0;j < n-1-i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				m = arr[j];
//				arr[j] =arr[j+1];
//				arr[j+1]= m;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if(flag == 1)
//		{
//			break;
//		}
//
//
//	}
//}
//
//int main()
//{
//	int i;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//int arr[][] = { {1,2,3,4},{5,6,7,8} };//行可以省略，列不能省略
//	//int arr2[][4] = { {1,2,3,4},{5,6,7,8} };
//	//int arr3[3][] = { {1,2,3,4},{5,6,7,8} };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("&arr[%d][%d]=%p ",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//int arr[][] = { {1,2,3,4},{5,6,7,8} };//行可以省略，列不能省略
//	//int arr2[][4] = { {1,2,3,4},{5,6,7,8} };
//	//int arr3[3][] = { {1,2,3,4},{5,6,7,8} };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%-2d]=%p\n", arr[i], &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//printf("%s\n", arr);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//创建一个数组-10个
//
//	int arr[10] = {1,2,3,4};//
//	char arr2[5] = {'a',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";//数组元素数量为7（包括'\0')
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", strlen(arr3));
//	//int n = 5;
//	//char ch[n];//err,[]内必须是常量表达式
//	return 0;
//}

