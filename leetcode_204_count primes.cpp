#include <iostream>

using namespace std;
class Solution {
public:
    bool isPrime(int n){// �ж�һ�����Ƿ�Ϊ������ʱ�临�Ӷ���O(n)
        if(n<=1) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimes(int n) {
//        unordered_map<int, bool> mp;// true��ʾ����������
        bool mp[n]={0};
        int sum=0;
        mp[1]=false;
        for(int i=2; i<n; i++){
            if(isPrime(i)){
                 mp[i] = true;
                 sum++;
            }
            else mp[i] = false;
            // ����������ı�������������
            // ��Ƿ���1
            int t=i*2;
//            for(int j=2; t<n; j++){
//                t *= j;
//                mp[t]=false;
//            }
            // ��Ƿ���2
            for(int j=i*i; j<n; ){
                mp[j] = false;
                j = j+i;
            }
        }
        return sum;
    }
};


class Solution{
public:
    int countPrimes(int n) {// ͳ����������
        if(n==1||n==2) return 0;
        if(n==3) return 1;
        bool mp[n]={0};// ��ʼ����������
        for(int i=2; i<n; i++){// �ж�i�ǲ�������
            if(mp[i]==1) continue;
            for(int k=i*i; k<n; k++) mp[k]=1;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){// �������������
                    mp[i] = 1;// ��ǲ�������
                    continue;
                }
            }
        }
        int res=0;
        for(int i=3; i<n; i++){
            if(mp[i]==0) res++;
        }
        return res;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
class Solution{
public:
    int countPrimes(int n) {// ͳ����������
        if(n<3) return 0;
        if(n==3) return 1;
        vector<bool> mp(n,0);
        // bool mp[n]={0};// ��ʼ����������
        int res=0;
        for(int i=2; i<n; i++){// �ж�i�ǲ�������
            if(mp[i]==1) continue;// ����Ѿ�����ǹ�����������������
            // ��ǰ��δ����ǹ���������Ҫ�����ж��Ƿ�Ϊ����
            for(int k=i+i; k<n; k+=i) mp[k]=1;// ��Ǹ��������б�������������
            res++;
        }
        return res;
    }
};
