class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        int size=r+1;
        sort(arr,arr+size);
        int smallest=arr[k-1];
        return smallest;
    }
};
//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
