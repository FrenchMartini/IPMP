//SECOND LARGEST ELEMENT
//Given an array of positive integers arr[],
//return the second largest element from the array. If the second largest element doesn't exist then return -1.
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int l = 0;
        int sl = 0;
        for(int i=0;i <n;i++){
            if(arr[i] > l){
                l = arr[i];
            }
        }
        for(int i =0 ;i <n ; i ++){
            if(arr[i] > sl && arr[i]!=l){
                sl = arr[i];
            }
        }
        if(sl == 0) return -1;
        return sl;
    }
};