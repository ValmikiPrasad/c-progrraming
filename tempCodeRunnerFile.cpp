int counting(int a[],int size){
    int count=0;
    for (int i = 0; i < size; i+=2)
    {
      
        if ((i+1)<size && (a[i]>a[i+1]))
        {
            count+=1;
        }
    }   
    return count;
}