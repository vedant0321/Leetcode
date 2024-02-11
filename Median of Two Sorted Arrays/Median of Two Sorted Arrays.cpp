class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         // Combine  arrays 
    for(int i = 0; i < nums2.size(); i++) {
        nums1.push_back(nums2[i]);
    }

    // Sort 
    sort(nums1.begin(), nums1.end());

    //  size 
    int t = nums1.size();

    // even
    if(t % 2 != 0) {
        
        int m1= t / 2;
     return double(nums1[m1]);
    } else {
       
        int m2 = (t - 1) / 2;
        int m3 = m2 + 1;
      
        return double(nums1[m2] + nums1[m3]) / 2;
      }
    }
};