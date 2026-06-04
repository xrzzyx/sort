#include <stdio.h>

void bubbleSort(int *data,int len)
{
     for(int i=0;i<len;i++)
     {
         for(int j=0;j<len-i-1;j++)
         {
            if(data[j+1]<data[j])
            {
                int temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
         }
     }
}


int main(int argc,char const *argv[])
{
    int data[]={47,35,60,95,77,15,28};
    int len=sizeof(data)/sizeof(data[0]);
    bubbleSort(data,len);
    printf("冒泡：\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",data[i]);
    }
    int data1[]={47,35,60,95,77,15,28};

    return 0;
}