class Solution {
public:
    int maxArea(vector<int>& height) {
	int midheight = height[0];
	int area=0,maxarea = 0; 
	int count=0;
	for(int i=0;i<height.size();i++){
		
		midheight=height[i];
		if(midheight!=0)
			count++; 
		for(int j=i+1;j<height.size();j++){
			if(height[i]>=height[j]&&height[j]!=0)
				midheight = height[j];
            if(height[j]>midheight&&midheight!=height[i])
				midheight = height[i];
			area = midheight*(j-i);
			maxarea = max(area,maxarea);
		}
	}
	if(count==1)
		return 0;
	return maxarea;
    }
};


