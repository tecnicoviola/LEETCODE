class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0; i<nums1.size(); i++){
            v.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            v.push_back(nums2[i]);
        }

        if(v.size() == 1){
            return v[0];
        }

        sort(v.begin(),v.end());
        double median = 0;
        int mid = v.size()/2;
        if(v.size()%2 == 0){
            median = double(v[mid] + v[mid-1])/2;
        }
        else{
            median = double(v[mid]);
        }
        return median;
    }
};