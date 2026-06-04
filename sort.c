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

void insertSort(int *data,int len)
{
    int key;
    for(int i=1;i<len;i++)
    {
        key=data[i];
        int j=i-1;
        while(j>=0&&data[j]>key)
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=key;
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
        printf("\n插入:\n");
    insertSort(data1,len);
     for(int i=0;i<len;i++)
    {
        printf("%d ",data1[i]);
    }
    return 0;
}