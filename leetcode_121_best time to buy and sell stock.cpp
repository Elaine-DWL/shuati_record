// ������Ҫ��һ��������a[j]-a[i]�����ֵ��j>=i;
// �����ñ�����
#include <iostream>
#include <vector>
using namespace std;
// --------------ֱ�ӱ������ 200/200 ��ʱ484ms  8.88% ʱ�临�Ӷ���o(n*n)
class Solution{
public:
    int maxProfit(vector<int>& prices){
        int t = 0;
        for(int i=0; i<prices.size(); i++){
            for(int j=i; j<prices.size(); j++){
                t = prices[j]-prices[i]>t?prices[j]-prices[i]:t;
            }
        }
        return t;
    }
};
// ------------  ����һ��˼���Ƕ�̬�滮  maxprofit[i]��ʾ�ڵ�i������ȥ(Ҫ�ڵ�i���֮ǰ����)�Ļ����ܲ������������
//      maxprofit[i]=max{price[i]-minprice[i], maxprofit[i-1] } minprice[i]��ʾǰ���е���С�۸�
//     ʱ��o(n)   4ms 99.54% 200/200
class Solution{
public:
    int maxProfit(vector<int>& prices){
        int maxprofit=0;
        int minprice=prices[0];
        for(int i=0; i<prices.size();i++){
            minprice = prices[i]<minprice?prices[i]:minprice;
            maxprofit = prices[i]-minprice>maxprofit?prices[i]-minprice:maxprofit;
        }
        return maxprofit;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
