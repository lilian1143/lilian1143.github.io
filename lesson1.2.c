#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int* add(int* a, int asize, int b, int* returnsize)
//{
//	int bsize = 0;
//	int num = 0;//�ж��Ƿ�ý�һλ
//	int ai = asize - 1;
//	int aa= 0;//���������Ǹ�����a���ʵ�ʱ�򲻻�Խ��
//	int bnum = b;//������ֵ����bnum���Ա��һ��ѭ��������������ָ���
//	int newnum = 0;//�������µ��������ʼ����
//	while (bnum)
//	{
//		bnum /= 10;
//		bsize++;
//	}
//	int len = asize > bsize ? asize : bsize;
//	int* arr = (int*)malloc(sizeof(int)*(len + 1));
//	while (len--)
//	{
//		if (a[ai] > 0)
//		{
//			aa = a[ai];
//		}
//		int ret = aa + b % 10+num;
//		if (ret > 9)
//		{
//			ret -= 10;
//			num = 1;
//		}
//		else
//		{
//			num = 0;
//		}
//		arr[newnum] = ret;
//		newnum++;
//	}
//	if (num == 1)
//	{
//		arr[newnum] = num;
//		newnum++;
//	}
//	int left = 0;
//	int right = newnum - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	*returnsize = newnum;
//	return arr;
//}