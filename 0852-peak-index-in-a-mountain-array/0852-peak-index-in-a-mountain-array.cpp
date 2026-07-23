class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        int mid=-1;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]<arr[mid+1])
            {
                low=mid+1;
            }
            else if(arr[mid]>arr[mid+1])
            {
                high=mid;
            }
        }
        return low;
    }
};