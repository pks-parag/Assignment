#include <stdio.h>
#include <stdlib.h>
void bubbleShort(int arr[], int n);
void selectionShort(int arr[], int n);
void printArray(int arr[], int n);
void arrayDefineSort(int arr[],int n );
void update(int arr[],int n);
void linearSearch(int arr[],int n);
void binarySearch(int arr[],int n);
void searchSelect(int arr[],int n );
//eigula upore na dile codeblocks implicit declaration of fuction warning dey !



int main()
{
    printf("-----------------Welcome to Array World----------------\n\n\n");
    printf(" What is your array size?\n Ans :");
    int arraySize,cho;
    scanf(" %d",&arraySize);
    int arr[arraySize];
    printf(" Enter your array : " );
    for (int i=0;i<arraySize;i++){
        scanf(" %d",&arr[i]);
    }
    while(1){
    printf("\n\n What kind of Oparetion  do you want  ? \n 1.Update. \n 2.Delete. \n 3.Sort. \n 4.Search. \n 5.Display. \n 6.Exit. \n Please Enter (1 -6) :  ");
    scanf("%d",&cho);

    switch(cho){
            case 1 :

               update(arr,arraySize);

                break;
            case 2 :
                
                deleteArray(arr,arraySize);

                break;
            case 3:
               arrayDefineSort(arr,arraySize);
               break;

            case 4:
                searchSelect(arr,arraySize);
                break;
            case 5:

                printArray(arr,arraySize);
                break;
            case 6:
                printf("\n\n Bye !\n Thank you !\n\n" );
                exit(0);


           }}
    printf("\n\n\t\t\t\t\t\t Code By Shornob ! \n\n" );

    return 0;
}
void arrayDefineSort(int arr[],int n ){
     printf("\n Input Sort Type : \n 1.Bubble Sort \n 2.Seletion Sort \n Please Enter (1 or 2): ");
                int ch3;
                scanf("%d",&ch3);
                if(ch3==1){
                    printf("\n-----Bubble Sort-----");
                    bubbleShort(arr,n);
                    //printf("-----Array Print-----\n");
                    printArray(arr,n);
                }
                 else if(ch3==2){
                    printf("\n-----Seletion Sort-----");
                    selectionShort(arr,n);
                    //printf("-----Array Print-----\n");
                    printArray(arr,n);
                }
                else{
                    printf("Wrong Input !");
                }

}
void update(int arr[],int n){

                int up1,val1;
               printf("\n Index that  you want update : ");
               scanf("%d",&up1);

               printf("\n Enter Value for index %d  : ",up1);
               scanf("%d",&val1);
               arr[up1]=val1;
               while(1){
               printf("\n\n What do you want to do ? \n 1.Update another one . \n 2.Exit \n 3.Print Updatted Array \n please Enter (1-3): ");
               int ch1;
               scanf(" %d",&ch1);
               if(ch1==1){
                 continue;
               }
               else if ( ch1==2){

                break;
               }
               else if(ch1==3){
                //printf("\n Your Array : ");
                printArray(arr,n);

               }
               else{
                printf(" \n Enter Valid input \n \n");
               }


}
}
void printArray(int arr[],int n ){
    printf("\n-----Your Array------\n");
    for (int i=0;i<n;i++){
        printf(" %d",arr[i]);
}printf("\n");
}
void bubbleShort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){

                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void selectionShort(int arr[],int n ){
    for(int i =0;i<n;i++){
        int smallIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[smallIndex]>arr[j]){
                smallIndex=j;
            }
        }

        int temp =arr[smallIndex];
                arr[smallIndex]=arr[i];
                arr[i]=temp;
    }


    }
void linearSearch(int arr[],int n){
    int num, found=0;
    printf("\n What value do you Searching ?\n : ");
    scanf("%d",&num);
    for(int i =0;i<n;i++){
        if (arr[i]==num){
            printf("\n Your value is found ! Index : %d",i);
            found=1;
        }

    }
    if(!found){printf("\n Your Value doesnot found! \n ");}
}
void binarySearch(int arr[],int n){
    int num;
    printf("\n What value do you Searching ?\n : ");
    scanf("%d",&num);
    bubbleShort(arr,n);
    int st=0,en=n-1,found=0;
    while(st<=en){
       int mid=(st+en)/2;
        if(num > arr[mid]){
            st=mid+1;
        }
        else if(num<arr[mid]){
            en=mid-1;
        }
        else{printf("\n Your value is found ! Index : %d \n ",mid);
        found=1;}
    }


        if(!found){ printf("\n Your Value doesnot found! \n ");}
    }

void searchSelect(int arr[],int n ){
    printf("What kind of Search do you want ? \n 1.Linear Search \n 2.Binary Search \n Enter(1 or 2): ");
    int ss;
    scanf("%d",&ss);
    if (ss==1){
        linearSearch(arr,n);
    }
    else if(ss==2){
        binarySearch(arr,n);
    }
    else printf("Enter Valid Input ! \n");
}
void deleteArray(int arr[],int n){
    int de;
    printf("\n Enter a Index That you Want to Delete : ");
    scanf("%d",&de);
    for(int i =de;i<n-1;i++){
        arr[i]=arr[i+1];
    }n--;
    printArray(arr,n);

}
