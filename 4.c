#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000000
int a[MAX]={0};

// 100 - TO PRINT ARRAY
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        printf("\n");
    }
}

//1
void InsertItemAtLast(int a[],int n,int key)
{
    a[n]=key;
}

//2
void InsertItemAtFirst(int a[],int n,int key)
{
    for(int i=n;i>0;i--) { a[i]=a[i-1]; }
    a[0]=key;
}

//3
void InsertItemAtIndex(int a[],int n,int i,int key)
{
    for(int x=n;x>i;x--) { a[x]=a[x-1]; }
    a[i]=key;
}

//4
void DeleteItemFromLast(int a[],int *n)
{
    --*n;
}

//5
void DeleteItemfromFirst(int a[],int n)
{
    for(int x=1;x<n;x++)
        a[x-1]=a[x];
}

//6
void DeleteItemFromIndex(int a[],int n,int i)
{
    for(int x=i;x<n-1;x++)
    {
        a[x]=a[x+1];
    }
}

//7
int unsortedAscending(int a[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       if(a[i+1]<a[i])
        return i+1;
   }
   return -1;
}
int unsortedDescending(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i+1]>a[i])
            return i+1;
    }
    return -1;
}
//8
int sortedAscending(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
            return i;
    }
    return -1;
}
int sortedDescending(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
            return i;
    }
    return -1;
}

//9
void SortArray(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

//10
int* ExtractSubset(int a[],int n,int i,int j, int *new)
{
    new = (int *) malloc (sizeof(int) * (j-i));
    for(int x=i, k=0; x<=j, k<j-i; x++, k++){
        new[k] = a[x];
    }
    return new;
}

//11
void DeleteSubset(int a[],int n,int i,int j)
{ //DELETE FROM INDEX i TO j IN a[]
    for(int x=i;x<n;x++)
    {
        if(x+j>=n)
            break;
        a[x]=a[x+j];
    }
}

//12
int* SplitIntoTwoArray(int a[],int n)
{
    int *sub = (int *) malloc (sizeof(int) * (n/2));
    for (int h = 0; h < n/2; h++)
    {
        sub[h]=a[h+n/2];
    }
    for (int h = n/2; h < n; h++)
    {
        a[h]=0;
    }
    return sub;
}

//13
int* CloneArray(int a[],int n,int b[])
{
    int *new = (int *) malloc (sizeof(int) * (n/2));
    for(int i=0;i<n;i++) { a[i]=b[i]; }
    return new;
}

//14
void ShiftLeftArray(int a[],int n, int r)
{
    int curr;
    while(r--){
        curr=a[0];
        for(int i=1;i<n;i++)
        a[i-1]=a[i];
        a[n-1]=curr;
    }
}

//15
void ShiftRightArray(int a[],int n, int r)
{
    int curr;
    while (r--){
        curr=a[n-1];
        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=curr;
    }
}

//16
void RotateArrayClockwise(int a[],int n,int r)
{
    for(int i=1;i<=r;i++){ ShiftRightArray(a,n,r); }
}

//17
void RotateArrayAntiClockwise(int a[],int n,int r)
{
    for(int i=1;i<=r;i++){ ShiftLeftArray(a,n,r); }
}

//18
int FindMin(int a[],int n)
{
    int min=a[0], index=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]<min){
            min=a[i];
            index=i;
        }
    }
    return index;
}

//19
int FindMax(int a[],int n)
{
    int max=a[0], index=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    return index;
}

//20
void FillArrayPseudoRandom(int a[],int n)
{
    for(int i=0;i<n;i++){
        a[i]=rand();
        printf("%d ", a[i]);
    }        
}

//21
void FillArrayTrueRandom(int a[],int n)
{
    srand(time(0));
    for(int i=0;i<n;i++){
        a[i]=rand();
        printf("%d ", a[i]);
    }
}

//22
int* IncreaseArraySize(int A[], int n, int m){
    int *LargerArray = (int*)malloc(m*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        LargerArray[i]=A[i];
    }
    return LargerArray;
}

//23
void SetArrayToZero(int a[],int n)
{
    for(int i=0;i<n;i++) { a[i]=0; }
}

//24
void DeleteAllItemOfArray(int A[], int n){
    for(int i=0;i<n;i++) { a[i]=-1; }    
}

//25
void DeleteArray(int a[],int n){
    a=NULL;
    printf("Array has been deleted");
}

//26
int* AllocateArray(int A[], int n){
    int *arr = (int*) malloc (n * sizeof(int));
    printf("The address of newly allocated array is: %p\n", arr);
}

int main()
{
    int n,m;
    printf("Enter the initial no of elements in Array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int key,i,j,r;
    int b[100000];
    int *new;
    printf("    Enter choice:\n0. All Operations Completed\n1. Insert item at last\n2. Insert Item At First\n3. Insert Item At Index\n4. DeleteItemFromLast\n5. Delete Item from First\n6. DeleteItemFromIndex\n7. Find Item Unsorted\n8. Find Item Sorted\n9. Sort Array\n10. ExtractSubest\n11. DeleteSubset\n12. Split Into Two Array\n13. m. CloneArray\n14. ShiftLeftArrayArray\n15. ShiftRightArrayArray\n16. RotateArrayClockwise\n17. RotateArrayAntiClockwise\n18. FindMin\n19. FindMax\n20. FillArrayPseudoRandom\n21. FillArrayTrueRandom\n22. IncreaseArraySize\n23. SetArrayToZero\n24. DeleteAllItemOfArray\n25. DeleteArray\n26. AllocateArray\n100. PrintArray\n");
    int choice;
    do
    {
        printf("\nEnter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            printf("Operations have been performed successfully\n");
            break;
        case 1:
            printf("Enter the number to be inserted\n");
            scanf("%d",&key);
            InsertItemAtLast(a,n,key);
            n++;
            printf("Array has been updated\n");
            break;
        case 2:
            printf("Enter the number to be inserted\n");
            scanf("%d",&key);
            InsertItemAtFirst(a,n,key);
            n++;
            printf("Array has been updated\n");
            break;
        case 3:
            printf("Enter the number to be inserted and enter the index respectively\n");
            scanf("%d %d",&key,&i);
            InsertItemAtIndex(a,n,i,key);
            n++;
            printf("Array has been updated\n");
            break;
        case 4:
            DeleteItemFromLast(a,&n);
            printf("Array has been updated\n");
            break;
        case 5:
            DeleteItemfromFirst(a,n);
            n--;
            printf("Array has been updated\n");
            break;
        case 6:
            printf("Enter the index to be deleted from\n");
            scanf("%d",&i);
            DeleteItemFromIndex(a,n,i);
            n--;
            break;
        case 7:
            printf("Considering the array to be a ascending array, thUnsortedelement is: ");
            printf("%d\n",unsortedAscending(a,n));
            printf("Considering the array to be a descending array, thUnsortedelement is: ");
            printf("%d\n",unsortedDescending(a,n));
            break;
        case 8:
            printf("For ascending: ");
            printf("%d\n",sortedAscending(a,n));
            printf("For descending: ");
            printf("%d\n",sortedDescending(a,n));
            break;
        case 9:
            SortArray(a,n);
            printf("Array has been Sorted\n");
            break;
        case 10:
            printf("Enter the starting and ending indexes of the subarray ithegiven array\n");
            scanf("%d %d",&i,&j);
            ExtractSubset(a,n,i,j,new);
            break;
        case 11:
            printf("Enter the the starting and ending indexed of the subse to be deleted\n");
            scanf("%d %d",&i,&j);
            DeleteSubset(a,n,i, j);
            printf("Required subset has been deleted\n");
            n=n-j+i-1;
            break;
        case 12:
            printf("Array after splitting:\n");
            n=n/2+1;
            SplitIntoTwoArray(a,n);
            break;
        case 13:
            printf("Enter %d elements for 2nd array\n",n);
            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
            CloneArray(a,n,b);
            n*=2;
            printf("Cloning has been done\n");
            break;
        case 14:
            ShiftLeftArray(a,n, 3);
            printf("Array has been shifted left\n");
            break;
        case 15:
            ShiftRightArray(a,n,3);
            printf("Array has been shifted right\n");
            break;
        case 16:
            printf("Enter no of rotations\n");
            scanf("%d",&r);
            r=r%n;
            RotateArrayClockwise(a,n,r);
            printf("Array has been rotated\n");
            break;
        case 17:
            printf("Enter no of rotations\n");
            scanf("%d",&r);
            r=r%n;
            RotateArrayAntiClockwise(a,n,r);
            printf("Array has been rotated\n");
            break;
        case 18:
            printf("The smallest element is at INDEX = %d\n", FindMin(a,n));
            break;
        case 19:
            printf("The largest element is at INDEX = %d\n", FindMax(a,n));
            break;
        case 20:
            FillArrayPseudoRandom(a,n);
            printf("\nArray has been filled with pseudo random numbers\n");
            break;
        case 21:
            FillArrayTrueRandom(a,n);
            printf("Array has been filled with true random numbers\n");
            break;
        case 22:
            printf("Enter the new size of Array\n");
            scanf("%d",&m);
            int * ptr = IncreaseArraySize(a, n, m);
            printf("Size of Array has been changed from %d to %d\n",n,m);
            for (int i = 0; i < m; i++)
            {
                printf("%d ", ptr[i]);
            }
            printf("\nIf m>n, then you may see GARBAGE VALUES\n");
            break;
        case 23:
            SetArrayToZero(a,n);
            break;
        case 24:
            DeleteAllItemOfArray(int a, n);
            n=0;
            printf("Elements Of array has been deleted");
            break;
        case 25:
            DeleteArray(a,n);
            n=0;
            break;
        case 26:
            printf("Enter the new size of array\n");
            scanf("%d",&n);
            AllocateArray(a, n);
            break;
        case 100:
            printArray(a,n);
            break;
        default:
            printf("Error 404\nExit Code status X");
        }
    }while(choice>=1 && choice<=26);
}
