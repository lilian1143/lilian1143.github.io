#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void rotate(int* nums, int numsSize, int k)
//{
//    k = k % numsSize;//让k的值不大于数组的值
//    for (int i = 0; i < numsSize / 2; i++)
//    {
//        int tmp = nums[i];
//        nums[i] = nums[numsSize - 1 - i];
//        nums[numsSize - 1 - i] = tmp;
//    }//整个数组翻转
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
//    }//轮转数组
//}
//void remove(int* nums, int numsSize)
//{
//    if (numsSize == 0)//如果数组是空直接返回0
//    {
//        return 0;
//    }
//    int a = 0;
//    int b = 1;//设成一前一后有助于检查是否重复。不重复就把前一个值记录下来
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
//    nums[i] = nums[a];//最后记录最后一个值
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
//    }//新加一组数据并将其与原节点连接起来
//    cur = head;
//    while (cur)
//    {
//        node* copy = cur->next;
//        if (cur->random)
//            copy->random = cur->random->next;
//        else
//            copy->random = NULL;
//         cur=cur->next->next;
//    }//将random也进行连接
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
// }//最后将其与原来的节点断开
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
//        if (cur->val <= sorthead->val）
//            {
//                cur->next = sorthead;
//                sorthead = cur;
//            }//头插
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
//                }//中间插
//            }
//            if (sortcur == NULL)
//            {
//                sortprev->next = cur;
//                cur->next = NULL;
//            }//尾插
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
//    printf("提示信息：“此程序对一系列整数求和。\n 输入整数（0 终止）：");
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