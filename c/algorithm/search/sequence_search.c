int sequence_search(int arr[], int len, int value)
{
  int i;
  for(i=0; i<len; i++){
    if(arr[i] == value)
      return i;
  }
}
