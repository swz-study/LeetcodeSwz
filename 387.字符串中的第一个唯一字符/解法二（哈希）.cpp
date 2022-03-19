    int firstUniqChar(string s) {
     	unordered_map<int,int> mid;
        for(auto i:s)
            ++mid[i];
        for(int i=0;i<s.size();++i){
            if(mid[s[i]]==1)
                return i;
        }
        return -1;   
    }
