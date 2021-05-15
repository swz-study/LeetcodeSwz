class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> st1;
        vector<int> result;
        result.clear();
        st.clear();
        st1.clear();
        for(int i=0;i<nums1.size();i++)
            st.insert(nums1[i]);
        for(int j=0;j<nums2.size();j++)
            st1.insert(nums2[j]);
        for(unordered_set<int>::iterator it = st1.begin();it!=st1.end();it++){
            if(st.find(*it)!=st.end()){
                result.push_back(*it);
            }
        }
        return result;
    }
};
