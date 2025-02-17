vector<int> reverseArray(vector<int> a) {
    int size=a.size();  //getting the size of the array
    int newarray[size]; //creating new array which has the same size as previouse array
    //reversing process
    for (int i=0;i<size;i++){
        newarray[size-i-1]=a[i];
        
    }
    return vector<int>(newarray, newarray + size);
    

}