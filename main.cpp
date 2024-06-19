#include <iostream>
#include<vector>
using namespace std;


int main() {
  vector<int> nums={0,0,0,1,1,2};
 // int duplicate=nums[0];
 int j=0;
int count=0;
  for(int i=0;i<nums.size();i++){

    if(nums[i]!=nums[i+1]){
    nums[j]=nums[i];
    j++;
      count++;
    }
  }
 
  for(int i=0;i<count;i++){
    cout<<nums[i]<<" ";
  }
return 0;}