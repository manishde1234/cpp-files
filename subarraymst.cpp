#include<bits/stdc++.h>
using namespace std;

int main(){
     
    // input 
    int nums[6] = {1,3,5,2,7,5};
    int minK =1,maxK = 5;

    int ans = 0;
    int j = -1;
      int prevMinKIndex = -1;
    int prevMaxKIndex = -1;

    for (int i = 0; i < 6; ++i) {
      if (nums[i] < minK || nums[i] > maxK){
        j = i;
      }
      if (nums[i] == minK){
        prevMinKIndex = i;
      }
      if (nums[i] == maxK){
        prevMaxKIndex = i;
      }
      ans += max(0, min(prevMinKIndex, prevMaxKIndex) - j);
      /*
      1st iteration
      prevMinKIndex = 0 prevMaxKIndex = -1 and j = -1
      max(0,min(0,-1)-(-1))
      max(0,-1+1)
      max(0,0)
      ans += 0

      3rd iteration 
      prevMinKIndex = 0 prevMaxKIndex = 2 and j = -1
      max(0,min(0,2)- (-1))
      max(0,0+1)
      ans += 1

      last iteration 
      prevMinKIndex = 0 prevMaxKIndex = 2 and j = 4
      max(0,min(0,2)-4)
      max(0,0-4)
      max(0,-4)
      ans+= 0
      */
    }
    cout << ans << endl;

    return 0;
}

