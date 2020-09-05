#include <iostream>
#include <>
using namespace std;
// �������
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int row = M.size(), col = M[0].size();
        vector<vector<int>> res;
        int a[8]={0};
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                // ����9������
                int cnt=0;//��ΧԪ�صĸ���
                int sum=0;//��ΧԪ�����
                for(int k=i-1; k<= )

            }
        }

    }
};
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int m=M.size(), n=M[0].size();
        vector<vector<int>> cnt(m+2, vector<int>(n+2, 1));//���ڼ����ľ������ܶ���0���м䶼��1

        for(int j=0; j<m+2; j++){// ��������������߱��0
            cnt[j][0] = 0;
            cnt[j][n+1] = 0;
        }
        for(int j=0; j<n+2; j++){// �����Ϻ��������߱��0
            cnt[0][j] = 0;
            cnt[m+1][j] = 0;
        }
        vector<int> a(n+2, 0);// �����
        for(int i=0; i<m; i++){// �����������ҵ�0
            M[i].push_back(0);
            M[i].insert(M[i].begin(), 0);
        }
        M.insert(M.begin(), a);//����������0
        M.push_back(a);//����������0
        vector<vector<int>> res(m, vector<int>(n));//���ڴ洢����ľ���
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                int sum = M[i-1][j-1] + M[i-1][j] + M[i-1][j+1]
                            +M[i][j-1] + M[i][j+1]
                            +M[i+1][j-1] + M[i+1][j] + M[i+1][j+1];
                int num = cnt[i-1][j-1] + cnt[i-1][j] + cnt[i-1][j+1]
                            +cnt[i][j-1] + cnt[i][j+1]
                            +cnt[i+1][j-1] + cnt[i+1][j] + cnt[i+1][j+1];
                res[i][j] = sum/num;
            }
        }
        return res;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
