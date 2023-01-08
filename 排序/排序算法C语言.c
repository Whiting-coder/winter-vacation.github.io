#include <stdio.h>
void  Result(int *nums,int length);
void BubbleSort(int *nums,int length);
void SelectionSort(int *nums,int length);
void InsertionSort(int *nums,int length);

int main(int argc, char *argv[])
{
    int nums[10] = {2,5,4,7,4,8,3,9,1,10};
    int length = sizeof(nums)/sizeof(nums[0]);
    BubbleSort(nums, length);
    SelectionSort(nums, length);
    InsertionSort(nums, length);
    return 0;
}
void swep(int *nums,int i,int j){
    int t;
    t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
}
void  Result(int *nums,int length){
    for (int i = 0; i < length; i++) {
        printf("%d\t",nums[i]);
    }
    printf("\n");
}
//冒泡
void BubbleSort(int *nums,int length){
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1; j++) {
            if(nums[j] > nums[j + 1]){//比较相邻元素
                swep(nums, j, j + 1);
            }else {
                continue;
            }
        }
    }
    printf("冒泡排序结果:\n");
    Result(nums,length);

}
//选择
void SelectionSort(int *nums,int length){
    for (int i = 0; i < length - 1; i++) {
        int min = i;
        for (int j = i+1; j < length; j++) {
            if(nums[j] < nums[min]){
                min = j;
            }
            swep(nums, i, min);
        }
    }
    printf("选择排序结果:\n");
    Result(nums, length);
}
//插入
void InsertionSort(int *nums,int length){
    for (int i = 0; i < length; i++) {
        int t = nums[i];
        for (int j = i; j < 0 && nums[j - 1] > t; j--) {
            if(nums[j] < t){//和右侧元素比较
                swep(nums, j, j - 1);
            }else {
                continue;
            }
        }
    }
    printf("插入排序结果:\n");
    Result(nums, length);
}