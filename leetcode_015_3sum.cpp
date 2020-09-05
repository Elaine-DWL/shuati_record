class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        // ������
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            int head=i+1, tail=n-1;
            while(head < tail){
                if(nums[tail]+nums[head]==-nums[i]) {
                    res.push_back(vector<int>({nums[i], nums[head], nums[tail]}));
                    head++;
                    tail--;
                    while(nums[head-1]==nums[head] && head+1<=tail) head++; // ������Ϊ�˷�ֹ ��-4 2 2 2 2 2��/��-4 1 1 2 2 3 3�������������
                    while(nums[tail+1]==nums[tail] && tail-1>=head) tail--;// ���������Ҫ  һ��Ҫ��ȥ�ݸ�ֽ������
                    
                }
                else if(nums[tail]+nums[head] < -nums[i]) head++;
                else tail--;
            }
            while(nums[i+1]==nums[i] && i+1<n) i++; // ����Ϊ�˱�֤û���ظ������
        }
        return res;
    }
};