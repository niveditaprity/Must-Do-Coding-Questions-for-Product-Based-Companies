
class Solution{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
    
      int m=0,mx=INT_MIN;
      for(int i=0;i<n;i++)
      {
      m=m+arr[i];
      if(arr[i]>m)
      {
          m=arr[i];
      }
      if(m>mx)
      {
          mx=m;
      }
      }
      return mx;// Your code here
        
    }
    };
