#include<iostream>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void swap(int *xp, int *yp);
void bubbleSortA(int arr[], int n);
void bubbleSortD(int arr[], int n);
void printArray(int arr[], int size);
int main()
{
    int arr[50],n,i,j,temp,c;
    system("cls");
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(i=0;i<n;++i)
        cin>>arr[i];
        while(c!=3){
          system("cls");
    cout<<"\n Enter Bubblesort Algorithm : \n 1. Ascending \n 2.Descending \n 3. Exit \n Make a Choice :  ";
    cin>>c;
        switch(c)
    { case 1 :bubbleSortA(arr, n);
              printArray(arr, n);
              break;
    case 2 :  bubbleSortD(arr, n);
              printArray(arr, n);
              break;
     case 3 : exit(0);
              break;
    default : cout<<"Incorrect";
              break;
  }
}
printArray(arr, n);

    return 0;
}
void bubbleSortA(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void bubbleSortD(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] < arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    cout<<"\nSorted Array is : \n";
    for (i=0; i < size; i++)
        cout<<"\t"<<arr[i];

    getch();
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
