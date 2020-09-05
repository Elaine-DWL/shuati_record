#include <iostream>

using namespace std;

// ����һ ��ϣ
class Solution {
public:
    char findTheDifference(string s, string t) {
        int mp[256]={0};
        for(char ch:s) mp[ch]++;
        for(char ch:t){
            if(mp[ch]==0) return ch;
            else mp[ch]--;
        }
    }
};
// ������ ��������
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0, sum2=0;
        for(char ch:s) sum1 += ch;
        for(char ch:t) sum2 += ch;
        return sum2-sum1;
    }
};
// ������ ���
class Solution {
public:
    char findTheDifference(string s, string t) {
        char r=0;
        for(char c:s) r ^=c;
        for(char c:t) r ^=c;
        return r;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
