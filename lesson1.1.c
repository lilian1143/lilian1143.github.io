#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void rotate(int* nums, int numsSize, int k)
//{
//    k = k % numsSize;//��k��ֵ�����������ֵ
//    for (int i = 0; i < numsSize / 2; i++)
//    {
//        int tmp = nums[i];
//        nums[i] = nums[numsSize - 1 - i];
//        nums[numsSize - 1 - i] = tmp;
//    }//�������鷭ת
//    for (int i = 0; i < k / 2; i++)
//    {
//        int tmp = nums[i];
//        nums[i] = nums[k - 1 - i];
//        nums[k - 1 - i] = tmp;
//    }
//    for (int i = k; i < (numsSize + k) / 2; i++)
//    {
//        int tmp = nums[i];
//        nums[i] = nums[numsSize - 1 - (i - k)];
//        nums[numsSize - 1 - (i - k)] = tmp;
//    }//��ת����
//}
//void remove(int* nums, int numsSize)
//{
//    if (numsSize == 0)//��������ǿ�ֱ�ӷ���0
//    {
//        return 0;
//    }
//    int a = 0;
//    int b = 1;//���һǰһ�������ڼ���Ƿ��ظ������ظ��Ͱ�ǰһ��ֵ��¼����
//    int c = 0;
//    int i = 0;
//    while(b<numsSize)
//    {
//        if (nums[a] != nums[b])
//        {
//            nums[i] = nums[a];
//            i++;
//        }
//        a++;
//        b++;
//    }
//    nums[i] = nums[a];//����¼���һ��ֵ
//    i++;
//    return i;
//}


//struct node* copy(struct node* head)
//{
// if(head=NULL)
// return NULL;
//    node* cur = head;
//    while (cur)
//    {
//        node* copy = (node*)malloc(sizeof(node));
//        copy->next = NULL;
//        copy->random = NULL;
//        copy->val = cur->val;
//        node* next = cur->next;
//        cur->next = copy;
//        copy->next = next;
//        cur = next;
//    }//�¼�һ�����ݲ�������ԭ�ڵ���������
//    cur = head;
//    while (cur)
//    {
//        node* copy = cur->next;
//        if (cur->random)
//            copy->random = cur->random->next;
//        else
//            copy->random = NULL;
//         cur=cur->next->next;
//    }//��randomҲ��������
//    cur=head;
//    node* copyhead=head->next;
// while(cur)
// {
// node* copy=cur->next;
// node* next=copy->next;
// cur->next=next;
// if(next)
// copy->next=next->next;
// else
// copy->next=NULL;
// cur=next;
// }//�������ԭ���Ľڵ�Ͽ�
// return copyhead;
//}


//struct list* insert(struct list* head)
//{
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    struct  list* sorthead = head;
//    struct list* cur = head->next;
//    sorthead->next = NULL;
//    while (cur)
//    {
//        struct list* next = cur->next;
//        if (cur->val <= sorthead->val��
//            {
//                cur->next = sorthead;
//                sorthead = cur;
//            }//ͷ��
//        else
//        {
//            node* sortprev = sorthead;
//            node* sortcur = sortprev->next;
//            while (sortcur)
//            {
//                if (cur->val <= sortcur->val)
//                {
//                    sortprev->next = cur;
//                    cur->next = sortcur;
//                    break;
//                }
//                else
//                {
//                    sortprev = sortcur;
//                    sortcur = sortcur->next;
//                }//�м��
//            }
//            if (sortcur == NULL)
//            {
//                sortprev->next = cur;
//                cur->next = NULL;
//            }//β��
//        }
//        cur = next;
//    }
//    return sorthead;
//}
//struct list* delete(list* phead)
//{
//    if (phead == NULL || phead->next == NULL)
//    {
//        return phead;
//    }
//    struct list* prev = NULL;
//    struct list* cur = phead;
//    struct list* next = cur->next;
//    while (next)
//    {
//        if (cur->val != next->val)
//        {
//            prev = cur;
//            cur = next;
//            next = next->next;
//        }
//        else
//        {
//            while (next&&cur->val == next->val)
//            {
//                next = next->next;
//            }
//
//            if (prev)
//            {
//                prev->next = next;
//            }
//            else
//            {
//                phead = next;
//            }
//            while (cur != next)
//            {
//                struct list* del = cur;
//                cur = cur->next;
//                free(del);
//            }
//            next = cur->next;
//        } 
//    }
//         return phead;
//}
//int main()
//{
//    int d = 0;
//    int sum = 0;
//    printf("��ʾ��Ϣ�����˳����һϵ��������͡�\n ����������0 ��ֹ����");
//    while (1)
//    {
//        if (scanf("%d", &d) != 1)
//            break;
//        if (d == 0)
//            break;
//        sum += d;
//    }
//    printf("The sum is: %d\n", sum);
//    return 0;
//}