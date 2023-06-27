class Solution{
  public:
    int minJumps(int arr[], int n){
            if(n <= 1)
            return 0;
        if(arr[0] == 0)
            return -1;

        int size = n - 1;
        int jumps = 1;
        int i = arr[0];

        while(i < size)
        {
            jumps++;
            i += arr[i];
            if(i >= size)
            {
                return jumps;
            }
        }

        return -1;


    }
};
