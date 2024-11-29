    //   worst Case TC = O(log n)
    //   best case TC = O(1)
    //   arr   = 1   2    3   4   5   6  7  8  9  
    //   target  =  4
    //   mid = (left + right)/2

    #include<stdio.h>
    int binarySearch(int arr[], int target, int n){
        int left = 0, right = n-1;      //  left = 5   right = 8
        while(left<=right){// 5<=8
            int mid = (left+right)/2;  //  mid = 6
            if( arr[mid] == target){  // 7 == 7
                return mid;
            }
            if(arr[mid]>target){ //  5 >7
                right = mid -1;
            }
            else{  
                left = mid+1;  //   4+1 = 5
            }
        }
        return -1;
    }

    int main(){
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int target = 7;
        int n = sizeof(arr)/sizeof(arr[0]);
        int ans = binarySearch(arr,target,n);
        printf("%d",ans);
        return 0;
    }