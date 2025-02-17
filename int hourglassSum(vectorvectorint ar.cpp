int hourglassSum(vector<vector<int>> arr) {
    int newarray[16]={0}; //creating a new array which hold 16 elements
    int index=0;   //initial index number
    for (int r=0;r<=3;r++){ //represent the rows
        for(int i=0;i<=3;i++){   //represent the columns
            int sum=0;     //to hold the sum 
            //getting the sum of to and bottom rows of hourglass
            for (int j=0;j<3;j++){
                sum+=arr[r][i+j]+arr[r+2][i+j];
            }
            //adding the middle value of hourglass to the sum
            sum+=arr[r+1][i+1];
            newarray[index]=sum; //store the sum of current hourglass in new arry 
            index++;
        }
    }
    //getting the max of all above sumations
    int maxSum=newarray[0];
    for (int i=1;i<index;i++){
        if(newarray[i]>maxSum){
            maxSum=newarray[i];
        }
    }
    return maxSum;

}