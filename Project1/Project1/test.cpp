//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string>
//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	string multiply(string num1, string num2) {
//		int s1 = num1.size() - 1;
//		int s2 = num2.size() - 1;
//		string shorts;
//		string longs;
//		if (s1 < s2)
//		{
//			shorts = num1;
//			longs = num2;
//		}
//		else
//		{
//			shorts = num2;
//			longs = num1;
//		}
//		string sum("0");
//		s1 = shorts.size() - 1;
//		while (s1 >= 0)
//		{//96755//020874
//			string ret = slove(shorts[s1], longs);
//			longs.push_back('0');
//			if (ret.size() != 0)
//				sum = add(sum, ret);
//			--s1;
//		}
//		reverse(sum.begin(), sum.end());
//		return sum;
//	}
//private:
//	string add(const string&sum, const string&ret)
//	{
//		int size = sum.size();
//		int carry = 0;
//		int count = 0;
//		string total;
//		while (count<size)
//		{
//			int temp = (sum[count] + ret[count] + carry - 2 * '0');
//			total.push_back(temp % 10 + '0');
//			carry = temp / 10;
//			++count;
//		}
//		int retsize = ret.size();
//		while (count < retsize)
//		{
//			int temp = (ret[count] + carry - '0');
//			total.push_back(temp % 10 + '0');
//			carry = temp / 10;
//			++count;
//		}
//		if (carry)
//			total.push_back('1');
//		return total;
//	}
//	string slove(const char chenshu, const string&longs)
//	{
//		if (chenshu == '0')
//			return string();
//		int s2 = longs.size() - 1;
//		string ret;
//		int carry = 0;
//		int index = 0;
//		while (s2 >= 0)
//		{
//			int temp = (chenshu - '0')*(longs[s2] - '0') + carry;
//			ret.push_back(temp % 10 + '0');
//			carry = temp / 10;
//			--s2, ++index;
//		}
//		if (carry)
//		{
//			ret.push_back(carry + '0');
//		}
//		return ret;
//	}
//public:
//	string multiply2(string num1, string num2)
//	{ 
//		if (num1 == "0" || num2 == "0")
//			return string("0");
//		int s1 = num1.size();
//		int s2 = num2.size();
//		vector<int>bit;
//		bit.resize(s1 + s2,0);
//		for (int i = s1 - 1; i >= 0; i--)
//		{
//			int val1 = num1[i] - '0';
//			for (int j = s2 - 1; j >= 0; j--)
//			{
//				int val2 = num2[j] - '0';
//				int chenji = val1*val2 + bit[i + j + 1];
//				bit[i + j+1] = chenji % 10;
//				bit[i + j] += chenji / 10;
//			}
//		}
//		string ret;
//		int i = 0;
//		if (bit[0] == 0)
//		{
//			++i;
//		}
//		
//		for (; i < s1 + s2; i++)
//		{
//			ret.push_back(bit[i] + '0');
//		}
//		return ret;
//	}
//	string multiply1(string num1, string num2) {
//		if (num1 == "0" || num2 == "0") return string("0");
//		int n1 = num1.size(), n2 = num2.size();
//		vector<int> res(n1 + n2, 0);
//		int r1, r2, sum;
//		for (int i = n1 - 1; i >= 0; --i){
//			r1 = num1[i] - '0';
//			for (int j = n2 - 1; j >= 0; --j){
//				r2 = num2[j] - '0';
//				sum = r1*r2 + res[i + j + 1];
//				res[i + j + 1] = sum % 10;
//				res[i + j] += sum / 10;
//			}
//		}
//		string res1;
//		int i = 0;
//		while (res[i] == 0) ++i;
//		while (i<n1 + n2){
//			res1 += res[i] + '0';
//			++i;
//		}
//		return res1;
//	}
//};
//
//int main()
//{
//	string s1("123");
//	string s2("456");
//	Solution sve;
//	string ret (sve.multiply2(s1, s2));
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int temp[256] = {};
//		int length = 0;
//		int start = 0;
//		int i= 0;
//		for (auto c:s)
//		{
//			if (temp[c] >start)
//			{
//				length = length < (i - start) ? (i - start):length;
//				start = temp[c];
//			}
//			temp[c]=++i;
//		}
//		length = length > (i - start) ? length : (i - start);
//		return length;
//	}
//
//};
//class Solution {
//public:
//	vector<int> singleNumber(vector<int>& nums) {
//		int temp = 0;
//		vector<int>::iterator it = nums.begin();
//		for (; it != nums.end(); ++it)
//		{
//			temp ^= *it;
//		}
//		int num1 = 0;
//		it = nums.begin();
//		int flag = 1;
//		while (!(temp&flag))
//		{
//			flag <<= 1;
//		} 
//		for (; it != nums.end(); ++it)
//		{
//			if (*it&flag)
//				num1 ^= *it;
//		}
//		vector<int>ret;
//		ret.push_back(num1);
//		ret.push_back(num1^temp);
//		return ret;
//	}
//};
//int main()
//{
//	string s("dvdf");
//	Solution sve;
//	//auto ret = sve.lengthOfLongestSubstring(s);
//	int array[] = { 1, 2, 1, 3, 2, 5 };
//	vector<int>nums(array, array + 6);
//	vector<int>ret = sve.singleNumber(nums);
//	return 0;
//}
//#include<string.h>
//#include<iostream>
//using namespace std;
//void reverse_chars(char src[], int start, int end) {
//	while (start < end)
//	{
//		swap(src[start], src[end]);
//		++start;
//		--end;
//	}
//}

//int main() {
//	char words[] = "I like beijing.";
//	int length = strlen(words);
//	reverse_chars(words, 0, length - 1);//将数组中所有的元素逆置
//	int index = 0;
//	for (int i = 0; i < length; i++) {
//		if (words[i] == ' ' || words[i] == '\0') {
//			reverse_chars(words, index, i - 1);
//			index = i + 1;
//		}
//	}
//
//	std::cout << words << endl;
//}


//
//class Solution {
//public:
//	bool match(char* str, char* pattern){
//		int s1 = 0;
//		int s2 = 0;
//		if (!str || !pattern)
//			return false;
//		if (!str[0] && pattern[0])
//			return false;
//		if (str[0] && !pattern[0])
//			return false;
//		while (str[s1] && pattern[s2])
//		{
//
//				if (str[s1+1] == '*')
//				{
//					while (pattern[s2] == str[s1] || pattern[s2] == '*')
//					{
//						++s2;
//					}
//					s1 += 2;;
//					if (str[s1] == 0 && pattern[s2] == '.'&&pattern[s2 + 1] == 0)
//						return true;
//				}
//				else if (pattern[s2+1] == '*')
//				{
//					while (pattern[s2] == str[s1] || str[s1] == '*')
//					{
//						++s1;
//					}
//					s2+=2;
//					if (pattern[s2] == 0 && str[s1] == '.'&&str[s1+1] == 0)
//						return true;
//				}
//				else if (str[s1] == '.' || pattern[s2] == '.')
//				{
//					++s1, ++s2;
//					if (str[s1] == 0 && pattern[s2] == '*')
//						++s2;
//					if (str[s1] == '*' && pattern[s2] == 0)
//						++s1;
//				}
//				else
//					return false;
//			}
//		if (str[s1] == 0 && pattern[s2] == 0)
//			return true;
//		else
//			return false;
//	}
//};
//int main()
//{
//	Solution s;
//	 char*s1 = ",";
//	 char*s2 = ".*";
//	 if (s.match(s1, s2))
//		 cout << "s" << endl;
//	 return 0;
//}

//
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		int hm = matrix.size();
//		int lm = matrix[0].size();
//		int h = 0;
//		int l = 0;
//		vector<int>ret;
//		ret.reserve(lm*hm);
//		for (; h<hm&&l<lm;)
//		{
//			Print(matrix, h, l, hm, lm, ret);
//			++h, ++l;
//			--hm, --lm;
//		}
//		return ret;
//	}
//	void Print(vector<vector<int>>&array, int H, int L, int HM, int LM, vector<int>&ret)
//	{
//		int i;
//		for (i = L; i<LM; ++i)
//		{
//			ret.push_back(array[H][i]);
//		}
//		for (i = H + 1; i<HM; ++i)
//		{
//			ret.push_back(array[i][LM - 1]);
//		}
//		for (i = LM - 2; i >= L; --i)
//		{
//			ret.push_back(array[HM - 1][i]);
//		}
//		for (i = HM - 2; i>H; --i)
//		{
//			ret.push_back(array[i][L]);
//		}
//	}
//};
//
//int main()
//{
//	Solution s1;
//	vector<vector<int>>array;
//	array.resize(4);
//	int count = 1;
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			array[i].push_back(count++);
//		}
//	}
//	s1.printMatrix(array);
//	return 0;
//}




/*


#include<stdio.h>

int total (int *array,int size)
{
int i=1;
int sum = 0;
int ret=array[0];
bool flag=false;
for(int i=0;i<size;++i)
{
if(array[i]>0)
{
sum+=array[i];
if(sum>ret)
{
ret=sum;
}
}
else
{
sum+=array[i];
if(sum<0)
sum=0;
if(array[i]>ret)
ret=array[i];
}
}
return ret;
}
int main()
{
int array[100000];
int count;
int i=0;
while(scanf("%d",&count)==1)
{

for(i=0;i<count;i++)
{
scanf("%d",&array[i]);
}
printf("%d",total(array,count));
}
}
*/
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == NULL)
//			return 0;
//		ListNode*prev = 0;
//		ListNode*pcur = pHead;
//		ListNode*next = pHead->next;
//		ListNode*del = NULL;
//		ListNode*ret = NULL;
//		if (pHead->next&&pHead->val == pHead->next->val)
//		{
//			while (1)
//			{
//				while (next&&pcur->val == next->val)
//				{
//					del = next;
//					next = next->next;
//					delete del;
//				}
//				delete pcur;
//				if (next == NULL)
//					return NULL;
//			    pcur = next;
//				next = next->next;
//				if (next == NULL)
//					return pcur;
//				else if (next&&pcur->val != next->val)
//				{
//					ret = prev = pcur;
//					break;
//				}
//			}
//		}
//		else
//		{
//			ret = pHead;
//			prev = pHead;
//			pcur = pHead->next;
//			if (pcur&&pcur->next)
//				next = pcur->next;
//			else
//				return pHead;
//		}
//		while (next)
//		{
//			if (pcur->val == next->val)
//			{
//				while (next&&pcur->val == next->val)
//				{
//					del = next;
//					next = next->next;
//					delete del;
//				}
//				del = pcur;
//				delete pcur;
//				prev->next = next;
//				pcur = next;
//				if (next)
//				{
//					next = next->next;
//				}
//				else
//					break;
//			}
//			else
//			{
//				prev = pcur;
//				pcur = next;
//				next = next->next;
//			}
//		}
//		return ret;
//	}
//};
//class Solution2 {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		if (head == NULL||head->next == NULL)
//			return head;
//		ListNode*prev = 0;
//		ListNode*pcur = head;
//		ListNode*next = head->next;
//		ListNode*del = NULL;
//		ListNode*newhead = new ListNode(0);
//		newhead->next = head;
//		prev = newhead;
//		while (next)
//		{
//			if (pcur->val == next->val)
//			{
//				while (next&&pcur->val == next->val)
//				{
//					del = next;
//					next = next->next;
//					delete del;
//				}
//				del = pcur;
//				delete pcur;
//				prev->next = next;
//				pcur = next;
//				if (next)
//				{
//					next = next->next;
//				}
//				else
//					break;
//			}
//			else
//			{
//				prev = pcur;
//				pcur = next;
//				next = next->next;
//			}
//		}
//		del = newhead;
//		newhead = newhead->next;
//		delete del;
//		return newhead;
//	}
//};
//class Solution1 {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		if (!head) return head;
//		ListNode *dummy = new ListNode(-1);
//		ListNode *prev = dummy;
//		while (head) {
//			int val = head->val;
//			int cnt = 1;
//			while (head->next && head->next->val == val) {
//				cnt++;
//				head = head->next;
//			}
//			if (cnt == 1) {
//				prev->next = head;
//				prev = prev->next;
//			}
//			head = head->next;
//		}
//		prev->next = nullptr;
//		return dummy->next;
//	}
//};
//int main()
//{
//	ListNode*head = new ListNode(1);
//	ListNode*node1 = new ListNode(1);
//	ListNode*node2 = new ListNode(2);
//	ListNode*node3 = new ListNode(2);
//	ListNode*node4 = new ListNode(5);
//	ListNode*node5 = new ListNode(5);
//	ListNode*node6 = new ListNode(5);
//	head->next = node1;
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;
//	node5->next = node6;
//	Solution s1;
//	ListNode*ret = s1.deleteDuplication(head);
//	return 0;
//}

///////////////////**********************************************//////////////////////////

//给定一个数组a[N]，我们希望构造数组b[N]，其中b[j] = a[0] * a[1]…a[N - 1] / a[j]，在构造过程中，
//不允许使用除法：要求O（1）空间复杂度和O（n）的时间复杂度；
//除遍历计数器与a[N] b[N]外，不可使用新的变量（包括栈临时变量、堆空间和全局静态变量等）
//我们假设j==N-1;
//b[j]=a[0]*a[1]*a[2]*...*a[j-1]
//当j-1==N-1时
//b[j-1]=a[0]*a[1]*a[2]*...*a[j-2]
//由此可以得b[j]=b[j-1]*a[j-1]
//先假设b0=1时
//b1=a0;
//b2=b1*a1;
//b3=b2*a2;
//.....
//b[N-1]=b[N-2]*a[N-2];
//然后回代N-1；
//b[n-1]*=1;
//b[n-2]*=b[n-1]
//b[n-3]*=b[n-1]*b[n-2];
//b[n-4]*=b[n-1]*b[n-2]*b[n-3];
//......
//b[1]*=b[n-1]*b[n-2]*b[n-3]*...*b[n-2];
//b[0]*=b[n-1]*b[n-2]*b[n-3]*...*b[n-2]*b[n-1];

//
//vector<int> ConstructB(vector<int>A)
//{
//	int size = A.size();
//	vector<int>B;
//	B.resize(size);
//	//假设B[0]=1;
//	B[0] = 1;
//	for (int i = 1; i < size; ++i)
//	{
//		B[i] = B[i - 1] * A[i - 1];
//	}
//	///回代B[0]
//	for (int i = size - 1; i>0; --i)
//	{
//		B[i] *= B[0];
//		B[0] *= A[i];
//	}
//	return B;
//}

//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//void   sloution(ListNode*head)
//{
//	if (head == NULL || head->next == NULL || head->next->next == NULL||head->next->next->next==NULL)
//		return;
//	ListNode*fast = head;
//	ListNode*slow = head;
//	ListNode*prev=0;
//	while (fast&&fast->next)
//	{
//		if (fast)
//			fast = fast->next;
//		if (fast)
//			fast = fast->next;
//		prev = slow;
//		slow = slow->next;
//	}
//	prev->next = NULL;
//	ListNode*l1 = head;
//	ListNode*l2 = slow;
//	ListNode*pcur=0;
//	while (l1&&l2)
//	{
//		pcur = l2;
//		l2 = l2->next;
//		pcur->next = l1->next;
//		l1->next = pcur;
//		l1 = pcur->next;
//	}
//	pcur->next = l2;
//}
//
//int main()
//{
//	ListNode*head = new ListNode(1);
//	ListNode*node1 = new ListNode(2);
//	ListNode*node2 = new ListNode(3);
//	ListNode*node3 = new ListNode(4);
//	ListNode*node4 = new ListNode(5);
//	ListNode*node5 = new ListNode(6);
////	ListNode*node6 = new ListNode(7);
//	head->next = node1;
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;
////	node5->next = node6;
//
//	sloution(head);
//	return 0;
//}

// struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//	
//};
//class Solution {
//public:
//	TreeNode *sortedListToBST(vector<int>head) {
//		vector<int>array=head;
//		//initarray(head, array);
//		TreeNode*root = CreatBSTTree(array, 0, array.size() );
//		return root;
//	}
//	/*void initarray(ListNode*head, vector<int>&array)
//	{
//		while (head)
//		{
//			array.push_back(head->val);
//			head = head->next;
//		}
//	}*/
//	TreeNode*CreatBSTTree(vector<int>&array, int left, int right)//0  3  
//	{
//		if (left == right-1)
//		{
//			return new TreeNode(array[left]);
//		}
//		if (left >= right)
//			return NULL;
//		int mid = left + ((right - left) >> 1);
//		TreeNode*root = new TreeNode(array[mid]);
//		root->left = CreatBSTTree(array, left, mid);
//		root->right = CreatBSTTree(array, mid + 1, right);
//		return root;
//	}
//};
//
//int main()
//{
//	vector<int>array;
//	array.resize(2);
//	for (int i = 0; i < 2; ++i)
//		array[i] = i + 1;
//	Solution s1;
//	TreeNode*root = s1.sortedListToBST(array);
//	return 0;
//}



 //struct ListNode {
 //    int val;
 //    ListNode *next;
 //    ListNode(int x) : val(x), next(NULL) {}
 //};

//class Solution {
//public:
//	ListNode *partition(ListNode *head, int x) {
//		if (head == NULL || head->next == NULL)
//			return NULL;
//		ListNode*l1 = new ListNode(0);
//		ListNode*tail1 = l1;
//		ListNode*l2 = new ListNode(0);
//		ListNode*tail2 = l2;
//		while (head)
//		{
//			if (head->val >= x)
//			{
//				tail2->next = head;
//				tail2 = tail2->next;
//			}
//			else
//			{
//				tail1->next = head;
//				tail1 = tail1->next;
//			}
//			head = head->next;
//		}
//		tail1->next = l2->next;
//		head = l1->next;
//		delete l2;
//		delete l1;
//		return head;
//	}
//};
 //class Solution {
 //public:
	// ListNode *sortList(ListNode *head) {
	//	 if (head == NULL || head->next == NULL)
	//		 return head;
	//	 ListNode*mid = GetMid(head);
	//	 if (head != 0 && head->next != 0)
	//		 head = sortList(head);
	//	 if (mid != 0 && mid->next != 0)
	//		 mid = sortList(mid);
	//	 head = merge(head, mid);
	//	 return head;
	// }
	// ListNode*GetMid(ListNode*head)
	// {
	//	 ListNode*fast = head;
	//	 ListNode*slow = head;
	//	 while (fast)
	//	 {
	//		 fast = fast->next;
	//		 if (fast)
	//		 {
	//			 fast = fast->next;
	//		 }
	//		 if (fast)
	//			 slow = slow->next;
	//	 }
	//	 ListNode*ret = slow->next;
	//	 slow->next = NULL;
	//	 return ret;
	// }
	// ListNode*merge(ListNode*l1, ListNode*l2)
	// {
	//	 ListNode*head = 0;
	//	 ListNode**tail = &head;
	//	 while (l1 || l2)
	//	 {
	//		 if (l1&&l2&&l1->val<l2->val)
	//		 {
	//			 (*tail) = l1;
	//			 l1 = l1->next;
	//		 }
	//		 else if (l1&&l2&&l1->val >= l2->val)
	//		 {
	//			 *tail = l2;
	//			 l2 = l2->next;
	//		 }
	//		 else
	//		 {
	//			 if (l1)
	//			 {
	//				 *tail = l1;
	//				 break;
	//			 }
	//			 else
	//			 {
	//				 *tail = l2;
	//				 break;
	//			 }
	//		 }
	//		 tail = &(*tail)->next;
	//	 }
	//	 return head;
	// };
 //};
// class Solution {
// public:
//	 ListNode *sortList(ListNode *head) {
//		 if (head == NULL || head->next == NULL)
//			 return head;
//		 ListNode*slow = head;
//		 ListNode*fast = head;
//		 ListNode*prev = 0;
//		 int key = head->val;
//		 while (fast)
//		 {
//			 if (fast->val<key)
//			 {
//				 prev = slow;
//				 slow = slow->next;
//				 if (slow != fast)
//					 swap(slow->val, fast->val);
//				 fast = fast->next;
//			 }
//			 else
//				 fast = fast->next;
//		 }
//		 
//		 if (slow != head)
//		 {
//			 swap(slow->val, head->val);
//			 prev->next = 0;
//			 sortList(head);	
//		 }
//		 sortList(slow->next);
//		 if (prev)
//		   prev->next = slow;
//		 return head;
//	 }
// };
//int main()
//{
//	ListNode*head = new ListNode(3);
//	ListNode*node1 = new ListNode(2);
//	ListNode*node2 = new ListNode(1);
///*	ListNode*node3 = new ListNode(4);
//	ListNode*node4 = new ListNode(1);
//	ListNode*node5 = new ListNode(6)*/;
//	head->next = node1;
//	node1->next = node2;
//	/*node2->next = node3;
//	node3->next = node4;
//	node4->next = node5;*/
//	Solution s1;
//	ListNode*ret= s1.sortList(head);
//	return 0;
//}


//#include<iostream>
//#include<stack>
//using namespace std;
//void test()
//{
//	stack<char>s1;
//	int n = 0;
//	char c;
//	char data;
//	for (;;)
//	{
//		cin >> n;
//		if (n == 0)
//			break;
//		for (; n; --n){
//			cin >> c;
//			switch (c)
//			{
//			case 'P':
//				cin >> data;
//				s1.push(data);
//				break;
//			case 'O':
//				if (!s1.empty())
//					s1.pop();
//				break;
//			case 'A':
//				if (s1.empty())
//					cout << 'E' << endl;
//				else
//					cout << s1.top() << endl;
//				break;
//			default:
//				break;
//			}
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//#include<vector>
//class SetOfStacks {
//public:
//	vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
//		// write code here
//		vector<vector<int>> array;
//		if (size <= 0)
//			return array;
//		int length = ope.size();
//		int i = 0;
//		vector<int>temp;
//		temp.resize(size);
//		int j = 0;
//		for (; i < length; ++i){
//			switch (ope[i][0])
//			{
//			case 1:
//				if (j == size)
//				{
//					array.push_back(temp);
//					j = -1;
//				}
//				temp[j] = ope[i][1];
//				++j;
//				break;
//			case 2:
//				if (j == 0)
//				{
//					int index = array.size() - 1;
//					if (index >= 0)
//					{
//						temp = array[index];
//						array.pop_back();
//						j = size;
//					}
//					else
//						break;
//				}
//				--j;
//				break;
//			}
//		}
//		if (j > 0)
//		{
//			temp.resize(j);
//			array.push_back(temp);
//		}
//		return array;
//	}
//};
//using namespace std;
//class SetOfStacks1 {
//public:
//	vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
//		// write code here
//
//		vector<vector<int>> array;
//		if (size <= 0)
//			return array;
//		int length = ope.size();
//		int i = 0;
//		vector<int>temp;
//		temp.reserve(size);;
//		for (; i < length; ++i){
//			switch (ope[i][0])
//			{
//			case 1:
//				if (temp.size()==size)
//				{
//					array.push_back(temp);
//					temp.clear();
//				}
//				temp.push_back(ope[i][1]);
//				break;
//			case 2:
//				if (temp.size()==0)
//				{
//					int index = array.size() - 1;
//					temp = array[index];
//					array.pop_back();
//				}
//				temp.pop_back();
//				break;
//			}
//		}
//		if (temp.size() > 0)
//			array.push_back(temp);
//		return array;
//	}
//};




//int  main()
//{
//	vector<vector<int>>ope;
//	ope.resize(4);
//	for (int i = 0; i < 4; i++)
//	{
//		ope[i].resize(2);
//	}
//	ope[0][0] = 1;
//	ope[1][0] = 1;
//	ope[2][0] = 2;
//	ope[3][0] = 1;
//
//	ope[0][1] = 1;
//	ope[1][1] = 2;
//	ope[3][1] = 3;
//	SetOfStacks s1;
//	vector<vector<int>>ret = s1.setOfStacks(ope, 1);
//	return 0;
//}


//class TwoStacks {
//public:
//	vector<int> twoStacksSort(vector<int> numbers) {
//		// write code here
//
//		vector<int>temp;
//		int size = numbers.size();
//		temp.reserve(size);
//		int i = size-1;
//		int data;
//		int count = 0;
//		for (i; i >= 0; --i)
//		{
//			data = numbers[i];
//			numbers.pop_back();
//			while (1)
//			{
//				if (temp.size()==0)
//				{
//					temp.push_back(data);
//					break;
//				}
//				else if (data >= temp[temp.size()-1])
//				{
//					temp.push_back(data);
//					break;
//				}
//				else
//				{
//					numbers.push_back(temp[temp.size() - 1]);
//					temp.pop_back();
//				}
//			}
//			while (temp.size()<count+1)
//			{
//				temp.push_back(numbers[numbers.size() - 1]);
//				numbers.pop_back();
//			}
//			++count;
//		}
//		numbers = temp;
//	     i = temp.size()-1;
//		temp.clear();
//		for (; i >= 0; --i)
//		{
//			temp.push_back(numbers[i]);
//		}
//		return temp;
//	}
//};
//
//int main()
//{
//	vector<int>s1;
//	for (int i = 0; i < 6; i++)
//	{
//		if (i == 3)
//			s1.push_back(0);
//		else
//			s1.push_back(6 - i - 1);
//	}
//	TwoStacks ts;
//	vector<int>ret = ts.twoStacksSort(s1);
//	return 0;
//}
//利用栈和递归逆序栈且不用其他数据结构
//class ReverseStack {
//public:
//	vector<int> reverseStackRecursively(vector<int> stack, int top) {
//		// write code here
//		for (int i = 0; i < top - 1; i++)
//		{
//			int ret = revers(stack, top -i);
//			stack[top - i - 1] = ret;
//		}
//		return stack;
//	}
//	int revers(vector<int>&stack, int top)
//	{
//		int temp = stack[top - 1];
//		if (top == 1)
//			return stack[0];
//		int ret = revers(stack, top - 1);
//		stack[top - 2] = temp;
//		return ret;
//	}
//};
//#include<string>
//int main()
//{
//	string s[] = new string[10];
//	vector<int>array;
//	for (int i = 0; i < 5; i++)
//	{
//		array.push_back(i + 1);
//	}
//	ReverseStack s1;
//	vector<int>ret = s1.reverseStackRecursively(array, array.size());
//	return 0;
//}
//#include<queue>
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	vector<vector<int> > Print(TreeNode* pRoot) {
//		vector<vector<int>>ret;
//		vector<int>temp;
//		queue<TreeNode*>qu;
//		TreeNode*pcur;
//		qu.push(pRoot);
//		int size = qu.size();
//		while (size)
//		{
//			for (int i = 0; i < size; ++i)
//			{
//				pcur = qu.front();
//				qu.pop();
//				temp.push_back(pcur->val);
//				if (pcur->left)
//					qu.push(pcur->left);
//				if (pcur->right)
//					qu.push(pcur->left);
//			}
//			ret.push_back(temp);
//			temp.resize(0);
//			size = qu.size();
//		}
//		return ret;
//	}
//};
////判断一个二叉树是不是对称二叉树 方法一
//class Solution {
//public:
//	//bool isSymmetric(TreeNode* pRoot)
//	//{
//	//	return issymmetrical(pRoot, pRoot);
//	//}
//	//bool issymmetrical(TreeNode*left, TreeNode*right)
//	//{
//
//	//	if (left&&right)
//	//	{
//	//		if (left->left&&right->right)
//	//		{
//	//			if (left->left->val != right->right->val)
//	//				return false;
//	//		}
//	//		else if (left->left == NULL&&right->right == NULL)
//	//		{
//	//		}
//	//		else
//	//			return false;
//	//		if (left->right&&right->left)
//	//		{
//	//			if (left->right->val != right->left->val)
//	//				return false;
//	//		}
//	//		else if (!left->right&&!right->left)
//	//			;
//	//		else
//	//			return false;
//	//		return issymmetrical(left->left, right->right) && issymmetrical(left->right, right->left);
//	//	}
//	//	else if (!left&&!right)
//	//		return true;
//	//	else
//	//		return false;
//	//}
//
//	bool isSymmetric(TreeNode* pRoot)
//	{
//		if (pRoot)
//		{
//			return issymmetrical(pRoot->left, pRoot->right);
//		}
//		return true;
//
//	}
//	bool issymmetrical(TreeNode*left, TreeNode*right)
//	{
//		if (!left&&!right)
//			return true;
//		if (!left)
//			return false;
//		if (!right)
//			return false;
//		if (left->val != right->val)
//			return false;
//		return issymmetrical(left->left, right->right) && issymmetrical(left->right, right->left);
//
//	}
//
//};
//方法二  1. 前序和中序遍历保存起来2.改变左右结点生成镜像树，3判断前序和中序遍历是否相同

//int main()
//{
//	TreeNode* root = new TreeNode(1);
//	TreeNode* left = new TreeNode(2);
//	TreeNode* right = new TreeNode(2);
//	root->left = left;
//	root->right = right;
//	left->left = new TreeNode(3);
//	left->right = new TreeNode(4);
//	right->left = new TreeNode(4);
//	right->right = new TreeNode(3);
//	Solution s1;
//	if (s1.isSymmetric(root))
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//	return 0;
//}
//
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode *root) {
//		vector<int>ret;
//		perorder(root, ret);
//		return ret;
//	}
//	void perorder(TreeNode*root, vector<int>&ret)
//	{
//		if (root == NULL)
//			return;
//		ret.push_back(root->val);
//		perorder(root->left,ret);
//		perorder(root->right,ret);
//	}
//};
//#include<iostream>
//using namespace std;
//////电话号码组合
//string number[10] = { "\0", "\0", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//class Solution {
//public:
//	vector<string> letterCombinations(string digits) {
//		vector<string>ret;
//		int len = digits.size();
//		if (len <= 0)
//		{
//			ret.push_back(string(""));
//			return ret;
//		}
//		string&str1 = number[digits[0] - '0'];
//		int i = 0;
//		string temp;
//		zhuhe(i, len, digits, ret, temp);
//		return ret;
//	}
//
//	void zhuhe(int i, int len, string&digits, vector<string>&ret, string temp)
//	{
//		if (i < len)
//		{
//			string&str1 = number[digits[i] - '0'];
//			if (str1.size() == 0)
//				zhuhe(i + 1, len, digits, ret, temp);
//			else
//
//			for (auto c : str1)
//			{
//				temp.push_back(c);
//				zhuhe(i + 1, len, digits, ret, temp);
//				temp.pop_back();
//			}
//		}
//		else
//		{
//			ret.push_back(temp);
//		}
//	}
//};
//
//int main()
//{
//	string input = "23";
//	Solution s1;
//	vector<string>ret  =s1.letterCombinations(input);
//	for (auto i : ret)
//		cout << i.c_str() << endl;
//		;
//	return 0;
//}
////n对括号所有的组合的可能性
//class Solution {
//public:
//	vector<string> generateParenthesis(int n) {
//		vector<string>ret;
//		if (n <= 0)
//		{
//			ret.push_back(string(""));
//			return ret;
//		}
//		string temp;
//		//加号个数
//		int add = 0;
//		//减号个数
//		int sub = 0;
//		zhuhe(add, sub, n, temp, ret);
//		return ret;
//	}
//
//
//	void zhuhe(int add, int sub, int n,string temp, vector<string>&ret)
//	{
//		if (add < n)
//		{
//			zhuhe(add + 1, sub, n, temp + '(', ret);
//			//右括号大于左括号时可以调用这个
//			if (add - sub > 0)
//			{
//				zhuhe(add, sub + 1, n, temp+')', ret);
//			}
//		}
//		else
//		{
//			while (sub < n)
//			{
//				temp.push_back(')');
//				++sub;
//			}
//			ret.push_back(temp);
//		}
//
//	}
//};
//int main()
//{
//	Solution s1;
//	vector<string> ret = s1.generateParenthesis(3);
//	for (auto i : ret)
//		cout << i.c_str() << endl;
//	return 0;
//}


////给定两个整数 n 和 k，返回 1 ... n 中所有可能的 k 个数的组合

//class Solution {
//public:
//	vector<vector<int>> combine(int n, int k) {
//		vector<vector<int>>ret;
//		vector<int>temp;
//		
//		zhuhe(1, n, k, temp, ret);
//		return ret;
//
//	}
//	void zhuhe(int i, int n, int k, vector<int>temp, vector<vector<int>>&ret)
//	{
//		if (k <= 0)
//		{
//			ret.push_back(temp);
//			return;
//		}
//		for (; i <= n; ++i)
//		{
//			temp.push_back(i);
//			zhuhe(i + 1, n, k-1, temp, ret);
//			temp.pop_back();
//		}
//	}
//};
//
//
//int main()
//{
//	int n = 4;
//	int k = 2;
//	Solution s1;
//	vector<vector<int>> ret = s1.combine(n, k);
//	return 0;
//}

//
//class Solution {
//public:
//	int mySqrt(int x) {
//		if (x == 0 || x == 1 || x == 2 || x == 3)
//			return x != 0;
//		if (x == 4)
//			return 2;
//		return erfen(1, x >> 1, x);
//	}
//	int erfen(int left, int right, int x)
//	{
//		while (left < right)
//		{
//			int mid = left + ((right - left) >> 1);
//			double sum =1.0* mid*mid;
//			if (sum == x)
//				return mid;
//			else if (sum > x)
//			{
//				sum =1.0* (mid - 1)*(mid - 1);
//				if ( sum<= x)
//					return mid - 1;
//				right = mid - 1;
//			}
//			else
//			{
//				
//				sum = 1.0*(mid + 1)*(mid + 1);
//				if (sum>=x)
//					return sum == x?mid+1:mid;
//				left = mid + 1;
//			}
//		}
//		return left;
//	}
//};
//
//int main()
//{
//	Solution s1;
//	cout << s1.mySqrt(2147395599) << endl;
//		return 0;
//}

//
//class Solution {
//public:
//	vector<string> restoreIpAddresses(string s) {
//		vector<string>ret;
//		string temp;
//		int len = s.size();
//		if (len<4 || len>12)
//			return  ret;
//		zhuhe(4, 0,len , s, temp, ret);
//		return ret;
//	}
//	void zhuhe(int pos,int index, int len, string&s, string temp, vector<string>&ret)
//	{
//		string sum;
//		if (pos == 0)
//		{
//			if (index == len)
//			{
//				temp.pop_back();
//				ret.push_back(temp);
//			}
//		}	
//		int i =0;
//		for (; i < 3 &&index<len&& pos <= len - index; ++i)
//		{	
//			sum.push_back(s[index++]);
//			if (atoi(sum.c_str()) > 255)
//			{
//				continue;
//			}
//			//010010  101023"
//			if (len - index <= 3 * pos && (i==0||sum[0]!='0'))
//			{
//				zhuhe(pos - 1, index, len, s, temp+sum+'.', ret);
//			}
//		}
//	}
//};
//

//class Solution {
//	vector<string> res;
//	string d = "", s;
//public:
//	vector<string> restoreIpAddresses(string s) {
//		this->s = s, dfs(0, 0);
//		return res;
//	}
//	void dfs(int step, int index){
//		string cur = "";
//		if (step == 4){
//			if (index != s.length()) return;
//			res.push_back(d);
//		}
//		else
//		for (int i = index; i<index + 3 && i<s.length(); i++){
//			cur += s[i];
//			int tmp = atoi(cur.c_str());
//			string temp = d;
//			if (tmp >= 0 && tmp <= 255 && (cur.length() == 1 || cur[0] != '0')){
//				step - 3 ? d += cur + "." : d += cur;
//				dfs(step + 1, i + 1), d = temp;
//			}
//		}
//	}
//};

//int main()
//{
//	Solution s1;
//	string s("0000");
//	vector<string>ret = s1.restoreIpAddresses(s);
//	for (auto i : ret)
//		cout << i.c_str() << endl;
//	return 0;
//}
//class Solution {
//public:
//	int jumpFloorII(int n) {
//		if (n == 1 || n == 0 || n == 2)
//			return 3 & n;
//
//		return pow(2,n-1);
//	}
//	//f(n) = f(n - 1) + f(n - 2) + ..... + f(1);
//	//f(n - 1) = f(n - 2) + f(n - 3) + .... + f(1);
//};
//
//int main()
//{
//	//2,1,1
//	Solution s1;
//	cout << s1.jumpFloorII(0) << endl;
//	cout << s1.jumpFloorII(1) << endl;
//	cout << s1.jumpFloorII(2) << endl;
//	cout << s1.jumpFloorII(3) << endl;
//	cout << s1.jumpFloorII(4) << endl;
//	cout << s1.jumpFloorII(5) << endl;
//}
////不用加减乘除实现加法
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//
//		int jinwei = ((num1&num2) << 1);
//		int bit = num1^num2;
//		do
//		{
//			num1 = ((jinwei&bit) << 1);
//			num2 = jinwei^bit;
//			jinwei = num1;
//			bit = num2;
//		} while (jinwei);
//		return num2;
//	}
//};
//int main()
//{
//	Solution s1;
//	cout << s1.Add(0, 0) << endl;
//	cout << s1.Add(-1, 21) << endl;
//	cout << s1.Add(-128, 0) << endl;
//	return 0;
//}
//#include<stack>
//#include<vector>
//#include<map>
//////////////////// 求最多有多少个点在一条直线上///////////////////////
//// Definition for a point.
// struct Point {
//     int x;
//     int y;
//     Point() : x(0), y(0) {}
//    Point(int a, int b) : x(a), y(b) {}
// };
//
// class Solution {
// public:
//	 int maxPoints(vector<Point>& points) {
//		 map<double, int>m;
//		 double key;	
//		 int ret = -1;	 
//		 vector<Point>::iterator it = points.begin();
//		 for (; it != points.end(); ++it)
//		 {
//			 map<double, int>m;
//			 int dup = 0;
//			 int chuzhi = 0;
//			 int curmax = 0;
//			 vector<Point>::iterator jt = points.begin();
//			 for (; jt != points.end(); ++jt)
//			 {
//				 if (it == jt)
//					 continue;
//				 double jx = jt->x;
//				 double jy = jt->y;
//				 double ix = it->x;
//				 double iy = it->y;
//				 if (jx == ix)
//				 {
//					 if (jy == iy)
//					 {
//						 dup++;
//					 }
//					 else
//					 {
//						 chuzhi++;
//						 curmax = max(chuzhi, curmax);
//					 }
//				 }
//				 else
//				 {
//					 key = (jy - iy) / (jx - ix);
//					 m[key]++;
//					 curmax = max(m[key], curmax);
//				 }
//			 }
//			 ret = max(ret, curmax + dup);
//		 }
//		 return ret + 1;
//	 }
// };
//int main()
//{
//	//{ 1, 1 }, { 3, 2 }, { 5, 3 }, { 4, 1 }, { 2, 3 }, { 1, 4 }
//	Point arr[] = { { 0, 0 }, { 1, 1 }, { 0, 0 } };
//	vector<Point>vec(arr,arr+(sizeof(arr)/sizeof(arr[0])));
//	Solution s1;
//	s1.maxPoints(vec);
//
//}

///////////////合并区间////////////////
//// Definition for an interval.
// struct Interval {
//     int start;
//     int end;
//     Interval() : start(0), end(0) {}
//     Interval(int s, int e) : start(s), end(e) {}
// };
// bool comp(Interval&left, Interval&right)
// {
//	 return left.start<= right.start;
// }
//class Solution {
//public:
//	vector<Interval> merge(vector<Interval>& intervals) {
//		 vector<Interval> ret,temp;
//		 temp = intervals;
//		 sort(temp.begin(), temp.end(), comp);
//		 int size = intervals.size();
//		 if (size == 0)
//			 return ret;
//		 vector<Interval>::iterator cur = temp.begin();
//		 ret.push_back(*cur++);
//		 int i  = 0;
//		 for (; cur != temp.end(); ++cur)
//		 {
//			 if ((*cur).start > ret[i].end || (*cur).end < ret[i].start)
//			 {
//				 ret.push_back(*cur);
//				 i++;
//			 }
//			 else
//			 {
//				 ret[i].start = min((*cur).start, ret[i].start);
//				 ret[i].end = max((*cur).end, ret[i].end);
//			 }
//		 }			
//		 return ret;
//	}
//};
//int main()
//{
//	//{ 1, 1 }, { 3, 2 }, { 5, 3 }, { 4, 1 }, { 2, 3 }, { 1, 4 }
//	Interval arr[] = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } };
//	vector<Interval>vec(arr, arr + (sizeof(arr) / sizeof(arr[0])));
//	Solution s1;
//	s1.merge(vec);
//
//
//}

//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		vector<int>ret;
//		int jinwei = 1;
//		stack<int>s1;
//		vector<int>::reverse_iterator    rit = digits.rbegin();
//		for (; rit != digits.rend(); rit++)
//		{
//
//			s1.push((*rit + jinwei) % 10);
//			jinwei = (*rit + jinwei) / 10;
//		}
//		if (jinwei)
//			s1.push(jinwei);
//		while (!s1.empty())
//		{
//			ret.push_back(s1.top());
//			s1.pop();
//		}
//		return ret;
//	}
//};
//int main()
//{
//
//	map<int, int>m;
//	m.value_comp();
//}
//
//class stu
//{
//public: 
//	stu()
//	{
//
//	}
//	void find(int a,int b){
//
//		cout << "no const" << endl;
//		int* pt = &a;
//		pt--;
//		cout << this << endl;
//		*pt = NULL;
//		cout << this << endl;
//		cout << a << endl;
//	}
//	void find()const{
//	}
//	stu*operator&()
//	{
//		return this;
//	}
//	int a;
//};
//struct s1
//{
//	int a;
//	char b;
//	short c;
//	double d;
//};
//#define offset(type,value)  (int)(&((type*)0)->value)
//int main()
//{
//	//stu*ptr = NULL;
//	//ptr->find();
//	int a = 3;
//	int *  const b = &a;
//	a = 10;
//	*b = 5;
//	stu s1;
////	s1.find(1,2);
//	cout <<offset(struct s1,d) << endl;
//	cout << sizeof(s1) << endl;
//	return 0;
//}



//// Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//		stack<TreeNode*>s;	
//		TreeNode*pcur = root;
//		vector<vector<int>>ret;	
//		if (root == NULL)
//			return ret;
//		bool flag=false;
//		s.push(pcur);
//		while (!s.empty())
//		{
//			stack<TreeNode*>stemp;
//			vector<int> tempret;
//			while (!s.empty())
//			{
//				pcur = s.top();
//				s.pop();
//				tempret.push_back(pcur->val);
//				if (flag)
//				{
//					if (pcur->right)
//					{
//						stemp.push(pcur->right);					
//					}
//					if (pcur->left)
//					{
//						stemp.push(pcur->left);
//					}
//				}
//				else
//				{
//					if (pcur->left)
//					{
//						stemp.push(pcur->left);
//					}
//					if (pcur->right)
//					{
//						stemp.push(pcur->right);
//					}
//				}
//			}
//			flag = !flag;
//			ret.push_back(tempret);
//			s = stemp;
//		}
//		return ret;
//	}
//
//};
//#include<hash_map>
//#include<cstring>
//#include<set>
//class comp
//{
//	int operator()(const char*value)
//	{
//		return value[0] + 12;
//	}
//};
//class equal1
//{
//	bool operator()(const char*left, const char*right)
//	{
//		return strcmp(left, right);
//	}
//};
//int main()
//{
//	//  set_union
//	hash_map<char*, int, hash<char*>,equal1>s2;
//	s2["'a'"] = 1;
//	s2["'b'"] = 1;
//	s2["'v'"] = 1;
//	s2["'b'"] = 1;
//	s2["'e'"] = 1;
//	hash_map<char*, int, hash<char*>, equal1>::iterator it = s2.begin();
//	while (it != s2.end())
//	{
//		cout << (*it)<< endl;
//		++it;
//	}
//	//set<int,comp>s1;
//	//s1.insert(1);
//	//set<int, comp>::iterator it = s1.begin;
//	//(*it) = 1;
//	return 0;
//}
/////////


///////有n个奶牛，每个奶牛拿着ai个苹果，每次只能从奶牛手里拿走两个苹果，求最少拿多少次，才可以使每个奶牛的苹果相等，如果没有办法返回-1
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int fangan(int n, int sum, vector<int>&array)
//{
//  //如果除不尽也不能均分的
//	if (sum%n != 0)
//		return -1;
//	int level = sum / n;
//	vector<int>::iterator it = array.begin();
//	int ret = 0;
//	for (; it != array.end(); ++it)
//	{
///      /////判断是不是全为奇数或者全为偶数，不然不可能均分的
//		if ((*it & 1) == (array[0] & 1))
//		{
//			if (*it>level)
//				ret += (*it - level) >> 1;
//		}
//		else
//			return -1;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int sum = 0;
//	vector<int>array;
//	array.resize(n);
//	for (int i = 0; i<n; i++)
//	{
//		cin >> array[i];
//		sum += array[i];
//	}
//	cout << fangan(n, sum, array) << endl;
//}

//////连续子数组求和///////////
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		int ret = array[0];
//		int sum = array[0];
//		vector<int>::iterator it = array.begin();
//		for (++it; it != array.end(); ++it)
//		{
//			sum += *it;
//			if (*it>0)
//			{
//				if (sum>ret)
//					ret = sum;
//			}
//			if (sum<0)
//			{
//          ////有可能全为负数
//				if (sum>ret)
//					ret = sum;
//				sum = 0;
//			}
//		}
//		return ret;
//	}
//};


/////////给定一个字符串，判断是不是回文，如果不是添加一个字符串判断是不是回文//////////////
//#include<iostream>
//#include<string>
//using namespace std;
//bool flag = true;
//bool echo(int start, int end, const string &s)
//{
//	if (start >= end)
//		return true;
//	for (; start<end;)
//	{
//		if (s[start] != s[end])
//			break;
//		++start;
//		--end;
//	}
//	if (start >= end)
//		return true;
//	if (flag)
//	{
//		flag = false;
//		return echo(start + 1, end, s) || echo(start, end - 1, s);
//	}
//	return false;
//}
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		if (echo(0, s.size() - 1, s))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//		s.resize(0);
//		flag = true;
//	}
//
//
//}
/////////给定一个数，求离他最近的fib其列数，并求出差是多少//////////////
//#include<iostream>
//using namespace std;
//int Fiboacci(int n)
//{
//	int first = 0;
//	int second = 1;
//	int three = 0;
//	while (1)
//	{
//		if (second == n)
//			return 0;
//		else if (second>n)
//			break;
//		three = first + second;
//		first = second;
//		second = three;
//	}
//	return second - n>n - first ? n - first : second - n;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cout << Fiboacci(n) << endl;
//	}
//}
///////////三种颜色排序  0（红）  1（蓝）  2（白）
//////////////////计数排序
//////代码略////////////////
//////////////////////////////
//class Solution {
//public:
//	void sortColors(int A[], int n) {
//		////记录0开始的位置           //记录二开始的位置
//		int begin = 0,                end = n - 1;
//		for (int i = 0; i <= end;)
//		{
//			if (A[i] < 1)
//			{
//				///如果找到0，与0开始的位置交换，i必须加加，因为begin里面的元素要么是0要么是1
//				A[i] = A[begin]; A[begin] = 0; ++begin;
//				++i;
//			}
//			////如果找到2，与2开始的位置交换，交换之后i不能加加，有可能把0还过去
//			else if (A[i] > 1)
//			{
//				
//				A[i] = A[end]; A[end] = 2; --end;
//			}
//			else
//				++i;
//		}
//	}
//};
//
///////////大数据运算 乘法//////////
//
//class Solution {
//public:
//	string multiply(string num1, string num2)
//	{
//		if (num1 == "0" || num2 == "0")
//			return string("0");
//		int s1 = num1.size();
//		int s2 = num2.size();
//		vector<int>bit;
//		bit.resize(s1 + s2, 0);
//		for (int i = s1 - 1; i >= 0; i--)
//		{
//			int val1 = num1[i] - '0';
//			for (int j = s2 - 1; j >= 0; j--)
//			{
//				int val2 = num2[j] - '0';
//				int chenji = val1*val2 + bit[i + j + 1];
//				bit[i + j + 1] = chenji % 10;
//				bit[i + j] += chenji / 10;
//			}
//		}
//		string ret;
//		int i = 0;
//		if (bit[0] == 0)
//		{
//			++i;
//		}
//
//		for (; i < s1 + s2; i++)
//		{
//			ret.push_back(bit[i] + '0');
//		}
//		return ret;
//	}
//};
//#include<iostream>
//using namespace std;
//
//
//class test
//{
//public:
//	test()
//	{
//		cout << "test" << endl;
//	}
//	test(const test&temp)
//	{
//		cout << "test" << endl;
//	}
//	test& operator=(const test&temp)
//	{
//		cout << "operator=" << endl;
//		return*this;
//	}
//	~test()
//	{
//		cout << "~test" << endl;
//	}
//};
//
//test funtest(test&t)
//{
//	test temp;
//	temp = t;
//	return temp;
//}
//int main()
//{
//	test t1;
//	test t2 = funtest(t1);
//	return 0;
//}



//////利用模板函数求1到n
//int sum = 0;
//template<class T,int number>
//void Print(T n)
//{
//	printf("%d ", n);
//	sum += n;
//	Print<T,number+1>(n + 1);
//}
//template<>
//void Print<int,101>(int n)
//{
//	//printf("%d", 100);
//}
//int main()
//{
//	Print<int,1>(1);
//	return 0;
//}
////////利用虚函数求1到n
//class base
//{
//public:
//	virtual int get(int n)
//	{
//		return 0;
//	}
//};
//base* arr[2];
//class dir :public base
//{
//public:
//	int get(int n)
//	{
//		return arr[!!n]->get(n - 1) + n;
//	}
//};
//
//int main()
//{
//	arr[0] = new base;
//	arr[1] = new dir;
//	printf("sum = %d\n", arr[1]->get(100));
//	return 0;
//}
////////c语言利用函数指针求1到n

//typedef int(*fun)(int);
//int fun1(int);
//int fun2(int);
//fun arr[2] = { fun1, fun2 };
//int fun1(int n)
//{
//	return 0;
//}
//int fun2(int n)
//{
//	return (*arr[!!n])(n - 1) + n;
//}
//
//int main()
//{
//	printf("sum = %d\n", (*arr[1])(100));
//	return 0;
//}


//#include<queue>
//
//class Solution {
//public:
//	int reverse(int x) {
//			long long ret = 0;
//			while (x)
//			{
//				ret = ret * 10 + x % 10;
//				x /= 10;
//			}
//			if ((int)0x80000000 <= ret&&ret <= (int)0x7FFFFFFF)
//				return (int)ret;
//			return 0;
//		}
//};
//int main()
//{
//	Solution s1;
//	cout << -123 % 10 << endl;
//	cout << s1.reverse(123) << endl;
//	return 0;
//}
// struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//	
//};


//class Solution {
//public:
//	ListNode *swapPairs(ListNode *head) {
//		ListNode*head1 = new ListNode(0);
//		ListNode*tail = head1;
//		ListNode*pcur = 0;
//		while (head&&head->next)
//		{
//			pcur = head->next->next;
//			tail->next = head->next;
//			tail = tail->next;
//			tail->next = head;
//			tail = tail->next;
//			head = pcur;
//		}
//		tail->next = head;
//		return head1->next;
//	}
//};
//int main()
//{
//	ListNode*n1 = new ListNode(1);
//	ListNode*n2 = new ListNode(2);
//	ListNode*n3 = new ListNode(3);
//	ListNode*n4 = new ListNode(4);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	Solution s1;
//	ListNode*ret = s1.swapPairs(n1);
//	return 0;
//}



//class a
//{
//	virtual void funa()
//	{
//
//	}
//};
//class b
//{
//	virtual void funb()
//	{
//
//	}
//};
//class c :public b, public a
//{
//
//};
//int main()
//{
//
//	c C;
//	a*A = &C;
//	b*B = &C;
//	c*pC = &C;
//	free(NULL);
//	return 0;
//}
/////////////////////////给定一个数n和m 从1......到n里面，随机找一个或多个数加起来等于m
//void  zhuhe(int pos ,int start, int end,int value,vector<int>ret)
//{
//
//	if (pos == 1)
//	{
//		if (start <= value&&value <= end)
//		{
//			ret.push_back(value);
//			for (auto i : ret)
//			{
//				cout << i << " ";
//			}
//			cout << endl;
//		}
//		return;
//	}
//	for (int i = start; i < end;i++)
//	{
//		//当前的和valus减去起始位置start的值必须大于等于当前start+1
//		if (value - i >= i + 1)
//		{
//			ret.push_back(i);
//			zhuhe(pos - 1, i + 1, end, value - i,ret);
//			ret.pop_back();
//		}
//	}
//}
//int digui(int n, int m)
//{
//	int i = 0;
//	//个数必须小于等于m的一半加一，比如3
//	int pos = (m >> 1) + 1;
//	vector < int > ret;
//	for (i = pos; i >0; i--)
//	{
//		zhuhe(i, 1, n, m, ret);
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		digui(n, m);
//	}
//	return 0;
//}

//////////查找连续最长的数字字符串
//#include<iostream>
//#include<string>
//using namespace std;
//void findmaxstr(const string&s)
//{
//	string ret;
//
//	int count = 0;
//	int len = s.size();
//	while (count<len)
//	{
//
//		if (isdigit(s[count]))
//		{
//			string temp;
//			while (count<len&&isdigit(s[count]))
//			{
//				temp += s[count++];
//			}
//			if (ret.size() < temp.size())
//			{
//				ret = temp;
//			}
//		}
//		++count;
//	}
//	cout << ret << endl;
//}
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		findmaxstr(s);
//	}
//	return 0;
//}



////////剪绳子////////////////动态规划////////////////
//int maxProductAfterCutting_solution(int length)
//{
//	if (length <= 0)
//		return 0;
//	if (length == 2)
//		return 1;
//	if (length == 3)
//		return 2;
//	int*products = new int[length + 1];
//	products[0] = 0;
//	products[1] = 1;
//	products[2] = 2;
//	products[3] = 3;
//
//	//4=2*2;
//	//5=2*3
//	//6=3*3;
//	//7=3*4
//	//8=3*3*2
//	//9=3*3*3
//	int max;
//	for (int i = 4; i <= length; i++)
//	{
//		max= 0;
//		for (int j = 1; j < i / 2; j++)
//		{
//			products[i] = products[j] * products[i - j];
//			if (products[i]>max)
//				max = products[i];
//		}
//		products[i] = max;
//	}
//	max = products[length];
//	delete[] products;
//	return max;
//}
//int main()
//{
//	cout <<"length="<< maxProductAfterCutting_solution(16) << endl;
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//int main()
//{
//	map<int, string>m1;
//	m1[1];
//	m1[1];
//	
//	cout << m1[1] << endl;
//
//	map<string, double>m2;
//	m2["123"]++;
//	m2["123"]++;
//	cout << m2["123"] << endl;
//
//	map<string, int>m3;
//	m3["123"]++;
//	m3["123"];
//	cout << m3["123"] << endl;
//	return 0;
//}
///////////////
//
//void Count(int spos, int tpos, const string&source, const string&target, int count, int &ret)
//{
//	if (spos == source.size() || tpos == target.size())
//	{
//		count += source.size()-spos;
//		count += target.size() - tpos;
//		if (ret > count||ret==0)
//			ret = count;
//		return ;
//	}
//	if (source[spos] == target[tpos])
//	{
//		Count(spos + 1, tpos + 1, source, target, count, ret);
//	}
//	else
//	{
//		Count(spos , tpos + 1, source, target, count + 1, ret);
//		Count(spos + 1, tpos + 1, source, target, count + 1, ret);
//		Count(spos + 1, tpos , source, target, count + 1, ret);
//	}
//}
//int minOperationCount(string source, string target)
//{
//	int ret = 0;
//	Count(0, 0, source, target, 0, ret);
//	return ret;
//}
//int main()
//{
//	string s1 = "sea";
//	string s2 = "eat";
//	cout << minOperationCount(s1, s2) << endl;
//	return 0;
//}


//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//void chuli(set<string>&ret, const string&str1)
//{
//	char ha[26] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
//	string temp;
//	int count = 0;
//	for (auto i : str1)
//	{
//		if (count == 3)
//		{
//			count++;
//			temp += '-';
//		}
//
//		if (isdigit(i))
//		{
//			temp += i;
//			count++;
//		}
//		else if (isupper(i))
//		{
//			count++;
//			temp += (ha[i - 'A'] + '0');
//		}
//	}
//	if (temp.size() == 8)
//		ret.insert(temp);
//
//}
//int main()
//{
//	int n;
//	string str1;
//	while (cin >> n&&n>0)
//	{
//		set<string>ret;
//		for (int i = 0; i<n; i++)
//		{
//			cin >> str1;
//			chuli(ret, str1);
//		}
//		for (auto i : ret)
//		{
//			cout << i << endl;
//		}
//		cout << endl;
//
//	}
//	return 0;
//}

/////////高精度加法运算

//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//void dataop(const string&str1, const string &str2)
//{
//	int flag1 = 1;
//	int flag2 = 1;
//	string ret;
//	if (str1[0] == '-')
//		flag1 = -1;
//	if (str2[0] == '-')
//		flag2 =-1;
//	int jinwei = 0;
//	int sum = 0;
//	if (flag1*flag2 != 1)
//	{
//		if (str1.size()>str2.size())
//
//	}
//	bool res = true;
//	for (int i = str1.size() - 1,  j = str2.size() - 1; i >= 0 || j >= 0 || jinwei; i--, j--)
//	{
//		int left=0, right=0;
//		if (i >= 0 && isdigit(str1[i]))
//			left = (str1[i] - '0');
//		if (j >= 0 && isdigit(str1[i]))
//			 right = (str2[j] - '0');
//		if (flag2*flag1 == 1)
//		{
//			sum = left + right + jinwei;
//			if (sum >= 10)
//			{
//				jinwei = 1;
//				ret.push_back(sum - 10 + '0');
//			}
//			else
//			{
//				ret.push_back(sum + '0');
//				jinwei = 0;
//			}
//		}
//		else
//		{
//			sum = left*flag1 + right*flag2 + jinwei;
//			if (sum<0)
//			{
//				ret.push_back(sum + 10 + '0');
//				jinwei = -1;
//				res = false;
//			}
//			else
//			{
//				ret.push_back(sum + '0');
//				jinwei = 0;
//				res = true;
//			}
//		}
//	}
//	reverse(ret.begin(), ret.end());
//	ret.push_back(0);
//	if (flag1 == -1 && flag2 == -1 || !res)
//		cout << '-';
//	int i;
//	for ( i= 0; i<ret.size(); i++)
//	{
//		if (ret[i] != '0')
//			break;
//	}
//	cout << &ret[i];
//}
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		dataop(str1, str2);
//	}
//}
//
//const int s = 2;
//#include<stdio.h>
//int main()
//{
//	const int a = 0;
//	char *p1= "abcd";
//	const int b = 10;
//    //int *p = &s;
//	*p= 10;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int sumcount(multiset<int> &array, int sum)
//{
//	multiset<int>::iterator startit = array.begin();
//	multiset<int>::iterator endit = --array.end();
//	int count = 1;
//	for (int i = 0; i < array.size(); i++)
//	{
//		for (int i = 0; i < count; i++)
//		{
//
//		}
//	}
//}
//int main()
//{
//	int n;
//	int sum;
//	int temp;
//	while (cin>>n>>sum)
//	{
//		multiset<int> setarray;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >>temp;
//			setarray.insert(temp);
//		}
//		cout << sumcount(setarray, sum) << endl;;
//	}
//}
///////////////机器人的移动范围
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//class Solution {
//public:
//	int minbu;
//	int movingCount(int threshold, int rows, int cols)
//	{
//		int count = 0;
//		minbu = threshold;
//		vector<vector<bool>>arrayflag;
//		arrayflag.resize(rows);
//		for (int i = 0; i < rows; i++)
//		{
//			arrayflag[i].resize(cols, false);
//		}
//		move(arrayflag, 0, 0, rows, cols, count);
//		return count;
//	}
//	void move(vector<vector<bool>>&arrayflag, int x, int y, int rows, int cols, int &count)
//	{
//
//		if (x<0 || x >= rows || y<0 || y >= cols)
//			return;
//		if (arrayflag[x][y])
//			return;
//		if (ismove(x, y))
//		{
//			arrayflag[x][y] = true;
//			++count;
//			move(arrayflag, x - 1, y, rows, cols, count);
//			move(arrayflag, x + 1, y, rows, cols, count);
//			move(arrayflag, x, y - 1, rows, cols, count);
//			move(arrayflag, x, y + 1, rows, cols, count);
//		}
//	}
//
//	bool ismove(int x, int y)
//	{
//		int sum = 0;
//		while (x)
//		{
//			sum += x % 10;
//			x /= 10;
//		}
//		while (y)
//		{
//			sum += y % 10;
//			y /= 10;
//		}
//		return sum <= minbu;
//	}
//};
//int main()
//{
//	Solution s1;
//	cout << s1.movingCount(18, 35, 38) << endl;
//}
typedef struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
}Node;
void pushfront(ListNode**pplist, int x)
{
	//assert(pplist);
	ListNode* node = (ListNode*)malloc(sizeof(Node));
	if (node == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	node->val = x;
	node->next = NULL;
	node->next = *pplist;
	*pplist = node;
}
///返回倒数第K个节点
//class Solution {
//public:
//	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
//		if (pListHead == NULL)
//			return NULL;
//		ListNode*secnd = pListHead;
//		while (pListHead->next&&k>1)
//		{
//			pListHead = pListHead->next;
//			--k;
//		}
//		if (k>1)
//			return NULL;
//		while (pListHead->next)
//		{
//			pListHead = pListHead->next;
//			secnd = secnd->next;
//		}
//		return secnd;
//	}
//};
//int main()
//{
//	ListNode* list = NULL;
//	pushfront(&list, 1);
//	pushfront(&list, 3);
//	pushfront(&list, 6);
//
//
//	Solution s1;
//	Node *ret= NULL;
//	if (ret = s1.FindKthToTail(list, 2))
//		cout << ret->val << endl;
//	return 0;
//}
////////删除一个排序链表中所有重复的节点
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == NULL)
//			return NULL;
//		ListNode*head = new ListNode(0);
//		ListNode*tail = head;
//		int value;
//		ListNode*pcur = pHead;
//		ListNode*next = NULL;
//		ListNode*denode = NULL;
//		while (pcur)
//		{
//			next = pcur->next;
//			if (next&&pcur->val == next->val)
//			{
//				value = pcur->val;
//				while (pcur&&pcur->val == value)
//				{
//					denode = pcur;
//					pcur = pcur->next;
//					delete denode;
//				}
//				if (pcur == NULL)
//					break;
//			}
//			else
//			{
//				tail->next = pcur;
//				tail = tail->next;
//				pcur = next;
//			}
//		}
//		tail->next = NULL;
//		denode = head;
//		head = head->next;
//		return head;
//	}
//};
//int main()
//{
//	ListNode* list = NULL;
//	pushfront(&list, 8);
////	pushfront(&list, 8);
//	//pushfront(&list, 7);
//	//pushfront(&list, 6);
//	//pushfront(&list, 6);
//	//pushfront(&list, 6);
//	//pushfront(&list, 4);
//	//pushfront(&list, 3);
//	//pushfront(&list, 2);
//	//pushfront(&list, 2);
//	//pushfront(&list, 1);
//	//pushfront(&list, 1);
//
//
//
//
//
//
//	Solution s1;
//	Node*head = s1.deleteDuplication(list);
//	return 0;
//}
#include<stack>
class Solution {
public:
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		if (l1 == NULL)
			return l2;
		if (l2 == NULL)
			return l1;
		int carry = 0;
		stack<ListNode*>left;
		stack<ListNode*>right;
		ListNode*head = new ListNode(0);
		ListNode*tail = head;
		while (l1)
		{
			left.push(l1);
			l1 = l1->next;
		}
		while (l2)
		{
			right.push(l2);
			l2 = l2->next;
		}
		while (!left.empty() || !right.empty() || carry)
		{
			int l = 0, r = 0;
			if (!left.empty())
			{
				l1 = left.top();
				l = l1->val;
				left.pop();
			}
			if (!right.empty())
			{
				l2 = right.top();

				r = l2->val;
				right.pop();
			}
			ListNode* newnode = new ListNode((r + l + carry) % 10);
			carry = (r + l + carry) / 10;
			tail->next = newnode;
			tail = tail->next;
		}
		return head->next;
	}

};
//int main()
//{
//	ListNode* list = NULL;
//	pushfront(&list, 9);
//	pushfront(&list, 8);
//	//pushfront(&list, 7);
//	//pushfront(&list, 6);
//	ListNode* list1 = NULL;
//	pushfront(&list1, 1);
///*	pushfront(&list1, 6);
//	pushfront(&list1, 4)*/;
//	Solution s1;//8876  664
//	Node*head = s1.addTwoNumbers(list1,list);
//	return 0;
//}
//删除倒数第k个节点
//class Solution {
//public:
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		if (n == 0 && head == NULL)
//			return head;
//		ListNode*pcur = head;
//		ListNode*first = head;
//		ListNode*second = head;
//		while (n-->0)
//		{
//			first = first->next;
//		}
//		if (first == NULL)
//			return head->next;
//		while (first->next)
//		{
//			first = first->next;
//			second = second->next;
//		}
//		second->next = second->next->next;
//		return head;
//	}
//};
///往右选择k个节点
//class Solution {
//public:
//	ListNode* rotateRight(ListNode* head, int k) {
//		if (head == NULL || k == 0)
//			return head;
//		int size = 1;
//		ListNode*pcur = head;
//		while (pcur->next)
//		{
//			++size;
//			pcur = pcur->next;
//		}
//		k %= size;
//		if (k == 0)
//			return head;
//		ListNode*first = head;
//		k = size - k - 1;
//		while (k--)
//		{
//			first = first->next;
//		}
//		pcur->next = head;
//		head = first->next;
//		first->next = NULL;
//		return head;
//	}
//};
#include<iostream>
#include<stack>
using namespace std;
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
	val(x), left(NULL), right(NULL) {
	}
};
//把二叉树改成双向链表
//class Solution {
//public:
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		stack<TreeNode*> st;
//		st.push(pRootOfTree);
//		TreeNode*pcur = NULL;
//		TreeNode*prev=NULL;
//		pcur = st.top();
//		st.pop();
//		while (!st.empty()||pcur)
//		{
//			while (pcur)
//			{
//				st.push(pcur);
//				pcur = pcur->left;
//			}
//			pcur = st.top();
//			st.pop();
//			if (prev&&)
//				prev->right = pcur;
//			pcur->left = prev;
//			prev = pcur;
//			pcur = pcur->right;
//		}
//		return pRootOfTree;
//	}
//};
////
////给定一个三角形，找出自顶向下的最小路径和。每一步只能移动到下一行中相邻的结点上。
////
////例如，给定三角形：
////
////[
////	[2],
////	[3, 4],
////	[6, 5, 7],
////	[4, 1, 8, 3]
////]
//////自顶向下的最小路径和为 11（即，2 + 3 + 5 + 1 = 11）。
//class Solution {
//public:
//	int minimumTotal(vector<vector<int>>& triangle) {
//		
//		int size = triangle.size();
//		vector<int> ret=triangle[size-1];
//		for (int i = size - 1; i >0 ; --i)
//		{
//			for (int j = 0; j < triangle[i-1].size(); ++j)
//			{
//				ret[j] = ((ret[j] <ret[j + 1] ? ret[j] : ret[j+1])+triangle[i-1][j]);
//			}
//		}
//		return ret[0];
//	}
//};
//int main()
//{
//	vector<vector<int>>array;
//	int a1[] = { 2 };
//	int a2[] = { 3,4 };
//	int a3[] = { 6,5,7 };
//	int a4[] = { 4,1,8,3 };
//	array.resize(4);
//	array[0] = vector<int>(a1, a1 + 1);
//	array[1] = vector<int>(a2, a2 + 2);
//	array[2] = vector<int>(a3, a3 + 3);
//	array[3] = vector<int>(a4, a4 + 4);
//	Solution s1;
//	s1.minimumTotal(array);
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stack>
//#include<queue>
//#include<assert.h>
//using namespace std;
//template<class K, class	V>
//struct BiTreeNode
//{
//	BiTreeNode(K key, V value) :_value(value), _key(key), left(NULL), right(NULL){}
//	BiTreeNode* left;
//	BiTreeNode* right;
//	K _key;
//	V _value;
//};
//template<class K, class V>
//class  BiSortTree
//{
//	typedef BiTreeNode<K, V> Node;
//	typedef BiTreeNode<K, V> TreeNode;
//public:
//	BiSortTree() :_root(NULL)
//	{
//	}
//	BiSortTree(V* array, int size) :_root(NULL)
//	{
//		int i = 0;
//		for (int i = 0; i < size; ++i)
//		{
//			Insert(array[i], i);
//		}
//	}
//	int TreeHight()
//	{
//		if (_root == NULL)
//			return 0;
//		return _TreeHight(_root);
//	}
//	int _TreeHight(Node*root)
//	{
//		if (root == NULL)
//			return 0;
//		int leftsize = _TreeHight(root->left);
//		int rightsize = _TreeHight(root->right);
//		return leftsize > rightsize ? leftsize + 1 : rightsize + 1;
//	}
//	////利用栈求一个树的高度
//	int TreeHightbystack()
//	{
//		int count = 0;
//		stack<Node*>save;
//		Node*pcur = _root;
//		Node*prev = NULL;
//		while (pcur || !save.empty())
//		{
//			while (pcur)
//			{
//				save.push(pcur);
//				pcur = pcur->left;
//			}
//			pcur = save.top();
//			if (pcur->right == NULL || pcur->right == prev)
//			{
//				int size = save.size();
//				if (count < size)
//					count = size;
//				prev = pcur;
//				pcur = NULL;
//				save.pop();
//			}
//			else
//				pcur = pcur->right;
//
//		}
//		return count;
//	}
//	///////利用一个队列求一个树的高度
//	int TreeHightbyqueue()
//	{
//		if (_root == NULL)
//			return 0;
//		queue<Node*>save;
//		int count = 0;
//		Node*pcur = NULL;
//		save.push(_root);
//		while (!save.empty())
//		{
//			int i = 0;
//			int size = save.size();
//			while (i++<size)
//			{
//				pcur = save.front();
//				save.pop();
//				if (pcur->left)
//					save.push(pcur->left);
//				if (pcur->right)
//					save.push(pcur->right);
//			}
//			++count;
//		}
//		return count;
//	}
//	bool Insert(K key, V value)
//	{
//		Node* newnode = new Node(key, value);
//		if (_root == NULL)
//			_root = newnode;
//		else
//		{
//			Node*pparent = NULL;
//			Node*pcur = _root;
//			while (pcur)
//			{
//				pparent = pcur;
//				if (pcur->_key == key)
//					return false;
//				else if (pcur->_key > key)
//					pcur = pcur->left;
//				else
//					pcur = pcur->right;
//			}
//			if (key < pparent->_key)
//				pparent->left = newnode;
//			else
//				pparent->right = newnode;
//		}
//		return true;
//	}
//
//	//转换为双向链表非递归
//	TreeNode* nreform_Two_list()
//	{
//		if (_root == NULL)
//			return NULL;
//		stack<TreeNode*> st;
//		st.push(_root);
//		TreeNode*pcur = _root;
//		while (pcur->left)
//		{
//			pcur = pcur->left;
//		}
//		TreeNode*phead = pcur;
//
//		TreeNode*prev = NULL;
//		pcur = st.top();
//		st.pop();
//		while (!st.empty() || pcur)
//		{
//			while (pcur)
//			{
//				st.push(pcur);
//				pcur = pcur->left;
//			}
//			pcur = st.top();
//			st.pop();
//			if (prev)
//				prev->right = pcur;
//			pcur->left = prev;
//			prev = pcur;
//			pcur = pcur->right;
//		}
//		return phead;
//	}
//	//转换为双向链表递归
//	Node* reform_Two_list()
//	{
//		Node*prev = NULL;
//		assert(_root);
//		Node*phead = _root;
//		while (phead->left)
//		{
//			phead = phead->left;
//		}
//		_reform_Two_list(prev, _root);
//		return phead;
//	}
//private:
//	//转换为双向链表
//	void _reform_Two_list(Node*&prev, Node*pcur)
//	{
//		if (pcur == NULL)
//			return;
//		_reform_Two_list(prev, pcur->left);
//		Node*right = pcur->right;
//		pcur->left = prev;
//		if (prev)
//			prev->right = pcur;
//		prev = pcur;
//		_reform_Two_list(prev, right);
//	}
//
//	Node* _root;
//};
//int main()
//{
//	int arr[] = { 5, 3, 2, 8, 1, 4, 7, 6, 9, 10 ,11};
//	BiSortTree<int, int>bt(arr, sizeof(arr)/sizeof(arr[0]));
//	/*BiTreeNode<int, int>*head = bt.nreform_Two_list();
//	while (head)
//	{
//		cout << head->_key << " ";
//		head = head->right;
//	}*/
//
//	/*   bt.reform_Two_list();*/
//	cout << bt.TreeHight() << endl;
//	cout << bt.TreeHightbystack() << endl;
//	cout << bt.TreeHightbyqueue() << endl;
//	return 0;
//}
//
/////输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes, 
////否则输出No。假设输入的数组的任意两个数字都互不相同。
//
////思路：后续遍历最后一个一定是根，所以数组的最后一个元素是根，然后以此为界限划分，小于根的是左边的
////剩下的一定大于根，不然就不是后续遍历，然后递归处理
//bool VerifySquenceOfBST(vector<int> sequence) {
//	if (sequence.empty())
//		return false;
//	int len = sequence.size();
//	vector<int> len_left;
//	vector<int> len_right;
//	int i = 0;
//	for (; i < len - 1; i++){
//		if (sequence[i] < sequence[len - 1])
//			len_left.push_back(sequence[i]);
//		else
//			break;
//	}
//	for (; i < len - 1; i++){
//		if (sequence[i] > sequence[len - 1]){
//			len_right.push_back(sequence[i]);
//		}
//		else
//			return false;
//	}
//	bool left = true, right = true;
//	if (!len_left.empty())
//		left = VerifySquenceOfBST(len_left);
//	if (!len_right.empty())
//		right = VerifySquenceOfBST(len_right);
//	return left && right;
//
//}
//
//
//
/////////判断一个树是不是平衡二叉树
//class Solution {
//public:
//
//	int Depth(TreeNode*pRoot, bool&flag)
//	{
//		if (pRoot == NULL)
//			return 0;
//		int leftsize = Depth(pRoot->left, flag);
//		int rightsize = Depth(pRoot->right, flag);
//		if (!flag)
//			return 0;
//		if (leftsize - rightsize>1 || leftsize - rightsize<-1)
//			flag = false;
//		return leftsize>rightsize ? leftsize + 1 : rightsize + 1;
//	}
//	bool IsBalanced_Solution(TreeNode* pRoot)
//	{	bool flag = true;
//	Depth(pRoot, flag);
//	return flag;
//}
//};
#include<queue>
//class Solution {
//public:
//	vector<vector<int> > Print(TreeNode* pRoot) {
//		vector<vector<int>>ret;
//		queue<TreeNode* >temp;
//		if (pRoot!=NULL)
//			temp.push(pRoot);
//		int i = 1;
//		int count = 1;
//		while (!temp.empty())
//		{
//			i = count;
//			count = 0;
//			vector<int>one;
//			for (int j = 0; j<i; j++)
//			{
//				TreeNode*  top = temp.front();
//				temp.pop();
//				one.push_back(top->val);
//				if (top->left)
//				{
//					temp.push(top->left);
//					++count;
//				}
//				if (top->right)
//				{
//					temp.push(top->right);
//					++count;
//				}				
//			}
//			ret.push_back(one);
//		}
//		return ret;
//	}
//};

//#include <iostream>
//#include <string>
//using namespace std;
////树的节点
//struct TreeNode
//{
//	char element;
//	int childNumbers;//孩子结点的个数
//	struct TreeNode* child[3];//孩子的数组
//	TreeNode(){}
//	TreeNode(char ele, int numbers)
//	{
//		element = ele;
//		childNumbers = numbers;
//		for (int i = 0; i<3; i++)
//			child[i] = NULL;
//	}
//	//重载赋值运算符
//	TreeNode& operator = (const TreeNode& other)
//	{
//		if (this == &other)
//			return *this;
//		else
//		{
//			element = other.element;
//			childNumbers = other.childNumbers;
//			for (int i = 0; i<3; i++)
//				child[i] = other.child[i];
//		}
//	}
//};
////二叉树的结点
//typedef struct BTreeNode
//{
//	char element;
//	BTreeNode *left;
//	BTreeNode *right;
//	BTreeNode(char ele = 0, BTreeNode *lchild = NULL, BTreeNode *rchild = NULL)
//	{
//		element = ele;
//		left = lchild;
//		right = rchild;
//	}
//}BTreeNode;
////构建树
//void CreateTree(TreeNode* &root)
//{
//	TreeNode *e = new TreeNode('E', 0);
//	TreeNode *f = new TreeNode('F', 0);
//	TreeNode *b = new TreeNode('B', 2);
//	b->child[0] = e;
//	b->child[1] = f;
//	TreeNode *g = new TreeNode('G', 0);
//	TreeNode *d = new TreeNode('D', 1);
//	d->child[0] = g;
//	TreeNode *c = new TreeNode('C', 0);
//	root = new TreeNode('A', 3);
//	root->child[0] = b;
//	root->child[1] = c;
//	root->child[2] = d;
//}
////将树转换为二叉树
//BTreeNode* TreeToBinaryTree(TreeNode *treeRoot)
//{
//	if (treeRoot == NULL)
//	{
//		return NULL;
//	}
//	BTreeNode* binaryRoot = new BTreeNode; //二叉树的根
//	binaryRoot->element = treeRoot->element;
//	binaryRoot->left = TreeToBinaryTree(treeRoot->child[0]); //左孩子
//	BTreeNode *brotherChild = binaryRoot->left; //兄弟
//	for (int i = 1; i<treeRoot->childNumbers; i++)
//	{
//		brotherChild->right = TreeToBinaryTree(treeRoot->child[i]);
//		brotherChild = brotherChild->right;
//	}
//	return binaryRoot;
//}
////二叉树中序输出
//void MiddleOrderPrint(BTreeNode *root)
//{
//	BTreeNode *temp = root;
//	if (temp == NULL)
//		return;
//	else
//	{
//		MiddleOrderPrint(temp->left);
//		cout << root->element << " ";
//		MiddleOrderPrint(temp->right);
//	}
//}
//int main()
//{
//	TreeNode *treeRoot;
//	CreateTree(treeRoot);
//	BTreeNode *binaryRoot = TreeToBinaryTree(treeRoot);
//	MiddleOrderPrint(binaryRoot);
//	cout << endl;
//	return 0;
//}

///////序列化二叉树和反序列化二叉树
//class Codec {
//private:
//	void preOrder(TreeNode* root, ostringstream& out)
//	{
//		if (!root)
//		{
//			out << "# ";
//			return;
//		}
//		out << root->val << " ";
//		preOrder(root->left, out);
//		preOrder(root->right, out);
//	}
//
//	TreeNode* preOrderDser(istringstream& in)
//	{
//		string val;
//		in >> val;
//		if (val == "#")
//			return NULL;
//		int real_val = stoi(val);
//		TreeNode* root = new TreeNode(real_val);
//		root->left = preOrderDser(in);
//		root->right = preOrderDser(in);
//		return root;
//	}
//public:
//
//	// Encodes a tree to a single string.
//	string serialize(TreeNode* root) {
//		ostringstream out;
//		preOrder(root, out);
//		return out.str();
//	}
//
//	// Decodes your encoded data to tree.
//	TreeNode* deserialize(string data) {
//		istringstream iss(data);
//		return preOrderDser(iss);
//	}
//};

//#include<string>
//#include<iostream>
//using namespace std;
//
//
//
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		int len = strs.size();
//		if (len == 0)
//			return "";
//		string str1 = strs[0];
//		for (int i = 0; i<str1.size(); ++i)
//		{
//			for (int j = 1; j<len; j++)
//			{
//				if (str1[i] != strs[j][i])
//					return str1.substr(0, i);
//			}
//		}
//		return str1;
//	}
//};
//int main()
//{
//	string s("1234567");
//	cout << s << endl;
//	cout << s.substr(0,3) << endl;
//
//	return 0;
//}

//////////求二叉树的最大路径的和
//int maxPathSum(TreeNode* root) {
//	int max = root->val;
//	maxsum(root, max);
//	return max;
//}
//int maxsum(TreeNode*root, int &retmax)
//{
//	if (root == NULL)
//		return 0;
//	int left = maxsum(root->left, retmax);
//	int right = maxsum(root->right, retmax);
//	int max1 = max(left + root->val, right + root->val);
//	int max2 = max(root->val, left + right + root->val);
//	int ret = max(max1, max2);
//	retmax = max(ret, retmax);
//	ret = max(left, right);
//	if (ret>0)
//		return ret + root->val;
//	else
//		return root->val;
//}

#include<string>
#include<iostream>
using namespace std;
class Solution1 {
public:
	int numTrees(int n) {
		if (n == 0 || n == 1)
			return n;
		vector<TreeNode*>ret;
		Creat(1, n, ret);
		return ret.size();
	}
	void Creat(int start, int end, vector<TreeNode*>&ret)
	{
		if (start>end)
		{
			ret.push_back(NULL);
			return;
		}
		for (int i = start; i <= end; ++i)
		{
			TreeNode*node = new TreeNode(i);
			ret.push_back(node);
			Creat(start, i - 1, ret);
			node->left = ret.back();
			ret.pop_back();
			Creat(i + 1, end, ret);
			node->right = ret.back();
			ret.pop_back();
		}
	}
};

int stringToInteger(string input) {
	return stoi(input);
}

int main() {
	string line;
	while (getline(cin, line)) {
		int n = stringToInteger(line);

		int ret = Solution1().numTrees(n);

		string out = to_string(ret);
		cout << out << endl;
	}
	return 0;
}