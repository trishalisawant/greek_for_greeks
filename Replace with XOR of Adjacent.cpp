class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>temp(n);
        if(n==1) return;
        temp[0] = arr[0] ^ arr[1];
        for(int i=0;i<arr.size();i++)
        {
          temp[i] = arr[i-1] ^ arr[i+1];
        }
        temp[n-1] = arr[n-2] ^ arr[n-1];
        arr=temp;
       
    }
};
