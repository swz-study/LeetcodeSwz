class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
		int count = 0;
		for(int i=0;i<board.size();i++){//每行 
			unordered_map<char,int> midchar;
			for(int j=0;j<board[i].size();j++){
				if(board[i][j] != '.'){
					count = midchar[board[i][j]]++;
					if(count>0) 
						return false;
				}
			}
		}
		for(int i=0;i<board.size();i++){//每列 
			unordered_map<char,int> midchar;
			for(int j=0;j<board[i].size();j++){
				if(board[j][i] != '.'){
					count = midchar[board[j][i]]++;
					if(count>0) 
						return false;
				}
			}
		}

		for(int k=1;k<=3;k++){
			unordered_map<char,int> midchar;
			for(int i=(k-1)*3;i<k*3;i++){ //i=0;i<3  456 789
				for(int j=0;j<3;j++){ //j=0;j<3
					if(board[i][j] != '.'){
						count = midchar[board[i][j]]++;
						if(count>0) 
							return false;
					}
				}
			}	
		}
		for(int k=1;k<=3;k++){
			unordered_map<char,int> midchar;
			for(int i=(k-1)*3;i<k*3;i++){ //i=0;i<3  456 789
				for(int j=3;j<6;j++){ //j=0;j<3
					if(board[i][j] != '.'){
						count = midchar[board[i][j]]++;
						if(count>0) 
							return false;
					}
				}
			}	
		}
		for(int k=1;k<=3;k++){
			unordered_map<char,int> midchar;
			for(int i=(k-1)*3;i<k*3;i++){ //i=0;i<3  456 789
				for(int j=6;j<9;j++){ //j=0;j<3
					if(board[i][j] != '.'){
						count = midchar[board[i][j]]++;
						if(count>0) 
							return false;
					}
				}
			}	
		}
	 
		return true;
    }
};
