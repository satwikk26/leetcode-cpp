class Solution {
public:
    int reverse(int x) {
        long long y=abs((long long)x);
        string s=to_string(y);
        std::reverse(s.begin(),s.end());
        long long a=stoll(s);
        if(a>INT_MAX || a<INT_MIN) return 0;
        if(x<0) return -a;
        return a;
    }
};