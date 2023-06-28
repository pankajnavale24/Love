class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int i=1, profit=0, min_price=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i]<min_price)
            {
                min_price=arr[i];
            }
            else
            {
                profit=max(profit,arr[i]-min_price);
            }
        }
        return profit;
    }
};
