string longestCommonPrefix(vector<string>& strs) {
	if(strs.size()==0)
		return "";
	int strlen = strs[0].size();
	int count = strs.size();
	for(int i=0;i<strlen;i++){
		char c = strs[0].[i];
		for(int j=1;j<count;j++){
			if(i == strs[j].size() || strs[j][i]!=c){
				return strs[0].substr(0,i);
			}
		}
	}
	return strs[0];
}
