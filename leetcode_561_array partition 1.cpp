#include <iostream>

using namespace std;
// �ù�ϣ  �������������λ�õ���֮��
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int myhash[20001]={0};
        // ת���ɹ�ϣ��洢
        for(int num:nums) myhash[num+10000]++;
        int flag=1;// �ж��ǲ�������λ ��ʼ��������λ
        int sum=0;// �洢�ܺ�
        int cnt =0;// �洢��ǰ�Ѿ��ۼӵĸ���
        for(int i=0; i<20001&&cnt<nums.size();){// ������ϣ��
            if(myhash[i]==0){//û���������� ������һ��
                i++;
                continue;
            }
            if(flag==0){// ��Ȼ���� ��������ż��λ ����Ҫ������һ��
                flag=1;
                myhash[i]--;
                if(myhash[i]==0) i++; // ���û���ظ�����
                continue;
            }
            if(myhash[i]>0 && flag==1){// ������λ����� �������һ��Ϊż��
                sum += i-10000;//���
                myhash[i]--;
                cnt++;
                flag = 0;//����´���ż��
                if(myhash[i]==0) i++;
            }
        }
        return sum;
    }
};

// ͬ���ǹ�ϣ �˼ҵı������ֱ��ҵļ�
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int hash[20001] = {0};

        for (int n : nums) {
            ++hash[n + 10000];
        }

        bool flag = true;
        int sum = 0;

        for (int i = 0; i < 20001; ++i) {
            if (flag == true) {
                sum += ((hash[i] + 1) / 2) * (i - 10000);
            } else {
                sum += (hash[i] / 2) * (i - 10000);
            }

            if ((hash[i] & 0x01) != 0) {
                flag = !flag;
            }
        }

        return sum;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
