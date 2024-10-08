#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int m=nums1.size();
        int n=nums2.size();
        if(n==0&&m==0)
            return 0;
        else if(n==0&&m==1)
            return nums1[0];
        else if(n==1&&m==0)
            return nums2[0];
        else
        {
            int j=0,k=0;
            int i=0;
            while(j<nums2.size()&&k<nums1.size()&&i<=(m+n)/2)
            {

                if(nums1[k]>nums2[j])
                {
                    nums.push_back(nums2[j]);
                    j++;
                }
                else{
                    nums.push_back(nums1[k]);
                    k++;
                }
                i++;
            }
        }
        int p=nums.size()-1;
        if(p%2==0)
        {
            double r= (nums[p-1]+nums[p-2])/2;
            return r;
        }
        else 
        {
            double s= nums[p-2];
            return s;
        }
        
    }
};
int main(){
    Solution s;
    cout<<s.findMedianSortedArrays(nums1,nums2);
    return 0;
}