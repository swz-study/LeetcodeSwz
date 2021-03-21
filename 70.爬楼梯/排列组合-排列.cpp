int countarray(int downnum,int upnum){//排列 
	if(downnum<upnum){
		int mid = downnum;
		downnum = upnum;
		upnum = mid;
	}
	int numdown = 1;
	int numup = 1;
	for(int i=downnum;i>0;i--)
		numup = i*numup;
	for(int i=1;i<downnum-upnum+1;i++)
		numdown = i*numdown;
	return numup/numdown;
}	
