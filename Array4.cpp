//Sort the array without using any sorting algo
 void sort012(int a[], int n)
    {         //n is size of array
        int k=0; int b[n];
        for(int i=0;i<n;i++){
               if(a[i]==0)
                {
                    b[k]=a[i]; k++;
                }
        }
         for(int i=0;i<n;i++){
            if(a[i]==1)
                 {
                    b[k]=a[i]; k++;
                }
        }
         for(int i=0;i<n;i++){
            if(a[i]==2)
                 {
                    b[k]=a[i]; k++;
                }
        }

        for(int i=0;i<n;i++)
        {
            a[i]=b[i];
        }

    }
