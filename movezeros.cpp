#include <iostream>
#include <vector>
using namespace std;

void moveZeroes (vector<int>& nums){
    int n = nums.size();
    int left= 0;

    for (int i = 0; i<n; i++){
        if (nums[i] !=0){
            nums[left++]= nums[i];

        }
    }
    for (int i = left ; i< n; i++){
        nums[i]=0;
    }

}
int main (){
    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);
    cout<<"Output 1:";
    for(int num : nums1){
       cout << num << " ";
    
}
cout << endl;

vector<int> nums2 = {0};
    moveZeroes(nums2);
    cout << "Output 2: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}