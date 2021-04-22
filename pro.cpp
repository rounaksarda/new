//given two sorted array, sort and print the arrays.
  
  #include <iostream>

using namespace std;

int main()
{
    int a[]={1,3,5,15,18,19};
    int b[]={2,4,6,15,16,19};
    int i=0,j=0,k=0;
    for(i=0,j=0;i<6 && j<6;k++)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    if(j<6)
    {
        for(j;j<6;j++)
        {
            cout<<b[j]<<" ";
        }
    }
    if(i<6)
    {
        for(i;i<6;i++)
        {
            cout<<a[i]<<" ";
        }
    }

    return 0;
}
