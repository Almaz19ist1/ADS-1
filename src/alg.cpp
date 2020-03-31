int binSearch(int *arr, int size, int value)
{
  int mid;
  left = 0;
  right = size - 1;
  bool flag = false;
  
  while((lift < right) && (flag != true))
  {
    mid = (left + right)/2;
    if(arr[mid] == value)
    {
      flag = true;
    }
    if(arr[mid] > value)
    {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
}
