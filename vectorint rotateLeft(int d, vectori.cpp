vector<int> rotateLeft(int d, vector<int> arr) {
    int size=arr.size(); //getting the size of the array
    int newarray[size]; //creating a new array of size of first array
    int newIndex; //creating a variable to hold the new index
    //rotating processe
    for (int i=0;i<=size-1;i++){
        if(i-d>=0){
            newIndex=i-d;
            newarray[newIndex]=arr[i];
        }
        else{
            newIndex=size-d+i;
            newarray[newIndex]=arr[i];
        }
    }
    return vector<int>(newarray,newarray+size); //returning the new array

}