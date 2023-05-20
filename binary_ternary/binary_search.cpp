int binarySearch(vi& arr, int x){
  int l = 0, r = sz(arr) - 1;
  while(r-l > 1){
    int mid = (l+r) / 2;
    if(arr[mid] == x) return mid;
    else if(arr[mid] > x) r = mid;
    else l = mid;
  }
  if(arr[l] == x) return l;
  if(arr[r] == x) return r;
  return -1;
}
