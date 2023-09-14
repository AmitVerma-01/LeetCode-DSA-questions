int partitionArray(int input[], int start, int end) { 
	int index;
	int i=start;
	int j=end;
	int pivot=input[start];
	while(i<j){
		while(input[i]<=pivot && i<=end) i++;
		while(input[j]>pivot && j>=start) j--;
		if(i<j)
		swap(input[i],input[j]);
	}
	
	swap(input[j],input[start]);
	return j;
}

void quickSort(int input[], int start, int end) {
	if(start<end){
		int pIndex=partitionArray(input,start,end);
		quickSort(input, start, pIndex-1);
		quickSort(input, pIndex+1, end);
	}
}
