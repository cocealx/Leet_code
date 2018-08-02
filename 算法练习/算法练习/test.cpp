#include<iostream>
using namespace std;
typedef struct Node
{
	int val;
	struct Node*next;
}ListNode ;
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
ListNode *partion(ListNode *pBegin, ListNode *pEnd){
	if (pBegin == pEnd || pBegin->next == pEnd)    return pBegin;
	int key = pBegin->val;    //选择pBegin作为基准元素
	ListNode *p = pBegin, *q = pBegin;
	while (q != pEnd){   //从pBegin开始向后进行一次遍历
		if (q->val<key){
			p = p->next;
			swap(&p->val, &q->val);
		}
		q = q->next;
	}
	swap(&p->val, &pBegin->val);
	return p;
}
void quick_sort(ListNode *pBegin, ListNode *pEnd){
	if (pBegin == pEnd || pBegin->next == pEnd)    
		return;
	int key = pBegin->val;
	//ListNode *mid = partion(pBegin, pEnd);
	ListNode *p = pBegin, *q = pBegin;
	while (q != pEnd){   //从pBegin开始向后进行一次遍历
		if (q->val<key){
			p = p->next;
			swap(&p->val, &q->val);
		}
		q = q->next;
	}
	swap(&p->val, &pBegin->val);
	quick_sort(pBegin, p);
	quick_sort(p->next, pEnd);
}
ListNode* sortList(ListNode* head) {
	if (head == NULL || head->next == NULL)    return head;
	quick_sort(head, NULL);
	return head;
}
void pushfront(ListNode**pplist, int x)
{
	//assert(pplist);
	ListNode* node = (ListNode*)malloc(sizeof(Node));
	if (node == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	node->val= x;
	node->next = NULL;
	node->next = *pplist;
	*pplist = node;
}
void qsort_list(ListNode*start, ListNode*end)
{
	if (start == end || start->next == end)
		return;
	ListNode *p1 = start;
	ListNode*p2 = start->next;
	int key = start->val;
	while (p2!=end)
	{
		if (p2->val < key)
		{
			p1 = p1->next;
			swap(p1->val, p2->val);
		}
		p2 = p2->next;
	}
	swap(start->val, p1->val);
	qsort_list(start, p1);
	qsort_list(p1->next, end);
}
void qsort_array(int *array, int start, int end)
{
	if (start+1==end||start == end)
		return;
	int key = array[start];
	int left = start;
	int right = end-1;
	while (left<right)
	{
		while (left <right&&array[right]>key)
		{
			--right;
		}
		while (left<right&&array[left]<=key)
		{
			++left;
		}
		swap(array[left], array[right]);
	}
	swap(array[right], array[start]);
	qsort_array(array, start, right);
	qsort_array(array, right+1, end);
}

void addjust(int *array, int root, int len)
{
	int left = (root << 1) + 1;
	int right = left + 1;
	int min = left;
	while (left<len)
	{
		if (right < len&&array[left] < array[right])
		{
			min = right;
		}
		if (array[root] < array[min])
			swap(array[root], array[min]);
		else
			break;
		root = min;
		left = (root << 1) + 1;
		right = left + 1;
		min = left;
	}
}
void sort_heap(int array[], int len)
{
	for (int i = (len - 1) >> 1; i >= 0; i--)
	{
		addjust(array, i, len);
	}
	for (int i = len - 1; i > 0; i--)
	{
		swap(array[0], array[i]);
		addjust(array, 0, i);
	}
}
int main()
{
	ListNode* list = NULL;
	pushfront(&list, 1);
	pushfront(&list, 3);
	pushfront(&list, 6);
	pushfront(&list, 2);
	pushfront(&list, 4);
	pushfront(&list, 1);
	pushfront(&list, 2);
	pushfront(&list, 5);
	pushfront(&list, 0);
	pushfront(&list, 1);
	//quick_sort(list, NULL);
	qsort_list(list, NULL);
	int array[14] = { 6, 4, 7, 3, 2, 9, -1, 12, 0, 3, 8, 12 ,3,6};
	//qsort_array(array, 0, 14);
	sort_heap(array, 14);
	return 0;
}