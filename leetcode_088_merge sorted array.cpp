// ������Ҫ��ϲ�������������nums1��nums2 ��nums1�ϲ���  ������nums1�Ŀռ��㹻��
#include <iostream>
#include <vector>

using namespace std;
// �����Լ��Ľⷨ�����������ڵ���vector��غ���
// ˼·���ǣ���С����(��������)����nums2��Ȼ��nums1����һ�����i,����ȷ����ǰnums2[j]��λ�á�
// ��Ϊ�õ�insert�������������vector����Nums1�Ĵ�С�����ǰ�����Ի���Ҫerase������ɾ�������0
class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        for(int i=0,j=0; j<n; j++){
            while(i<m+j && nums1[i] <= nums2[j]) i++;
            nums1.insert(nums1.begin()+i, nums2[j]);
            i++;
        }
        nums1.erase(nums1.begin()+m+n, nums1.end());
    }
};
//  leetcode1 ���˵�����ⷨ
// ����˼·�ǣ�nums1�Ĵ�С��m+n,һ��ʼnums1�洢��������m����
// Ҫ��nums2�����е����ݰ���С������뵽nums1��.
// ��nums1�����һ��λ�ÿ�ʼ���Ƚ�mums2��nums1ԭʼ����������������Ĵ�С��ѡȡ��ǰ�����ķ���nums1��ĩβ
// Ȼ�������ķ�������ѡ�������ķ���nums1�ĵ����ڶ���λ�á�
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, tar = m + n - 1;
        while (j >= 0) {
            nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }
    }
};
//---------------------------------leetcode2 ��leetcode1��ʵ��һ��˼· ���Ǳ�leetcode1д�ĸ���ϸ�㣬����������
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int r1 = m-1, r2 = n-1, r = m+n-1;
        while(r1>=0 && r2>=0)
            nums1[r--] = nums1[r1]>nums2[r2]? nums1[r1--] : nums2[r2--];
        while(r2 >= 0)
            nums1[r--] = nums2[r2--];
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
