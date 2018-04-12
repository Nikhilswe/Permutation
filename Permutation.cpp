#include <iostream>
#include <string.h>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
void permute(char *a, int l, int r)
{
    int i;
    if(l==r)
        cout<<"\n"<<a<<endl;
    else
    {
        for(i=l;i<=r;i++)
        {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i));
        }

    }
}
int main()
{

    char str[] = "ABC";
    unsigned int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
    return 0;
}
