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
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(�����������������������Ĵ�С����λ���ֽ� 
//	////2.&�������������������������飬ȡ��������������ĵ�ַ
//	//printf("%d\n", *arr);//arr����Ԫ�ص�ַ
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//��printf("%p\n", &arr);�����Ȼһ�£��������岻ͬ
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//void bubble_sort(int arr[],int n)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	int m;
//	for (i=0;i<n-1;i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0;j < n-1-i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				m = arr[j];
//				arr[j] =arr[j+1];
//				arr[j+1]= m;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//��arr���������ų�����
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��ά����
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//int arr[][] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ�ԣ��в���ʡ��
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



//��ά����
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//int arr[][] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ�ԣ��в���ʡ��
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
//	//����һ������-10��
//
//	int arr[10] = {1,2,3,4};//
//	char arr2[5] = {'a',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";//����Ԫ������Ϊ7������'\0')
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", strlen(arr3));
//	//int n = 5;
//	//char ch[n];//err,[]�ڱ����ǳ������ʽ
//	return 0;
//}

