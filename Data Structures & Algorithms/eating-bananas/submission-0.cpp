class Solution {
public:
    long fun(vector<int>arr,int n)
        {
            long total=0;
            for(int i=0;i<arr.size();i++)
            {
                total+=ceil((double)arr[i]/n);
            }
            return total;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        long maxi=*max_element(piles.begin(),piles.end());
        int low=1,high=maxi;
        while(low<=high)
        {
            long mid=(low+high)/2;
            long req=fun(piles,mid);
            if(req>h)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
