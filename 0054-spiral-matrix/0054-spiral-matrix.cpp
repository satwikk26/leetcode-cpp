class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int minr=0, maxr=matrix.size()-1, minc=0, maxc=matrix[0].size()-1;
        int m=matrix.size(), n=matrix[0].size();
        int count=m*n;
        while(minr<=maxr && minc<=maxc)
        {
            for(int j=minc;j<=maxc && count>0;j++)
            {
                v.push_back(matrix[minr][j]);
                count--;
            }
            minr++;
            for(int i=minr;i<=maxr && count>0;i++)
            {
                v.push_back(matrix[i][maxc]);
                count--;
            }
            maxc--;
            for(int j=maxc;j>=minc && count>0;j--)
            {
                v.push_back(matrix[maxr][j]);
                count--;
            }
            maxr--;
            for(int i=maxr;i>=minr && count>0;i--)
            {
                v.push_back(matrix[i][minc]);
                count--;
            }
            minc++;
        }
        return v;
    }
};