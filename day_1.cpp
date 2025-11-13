#include <iostream>
#include <vector>
using namespace std;
// to find product and sum of elements in array
int product=1;
int sum=0;
int product_of_array(int a[],int size)
{
   for(int i=0;i<5;i++)
   {
      product=product*a[i];
   }
   cout<<"product-"<<product<<endl;

}
int sum_of_array(int a[],int size)
{
   for(int i=0;i<5;i++)
   {
      sum=sum + a[i];
   }
   cout<<"sum-"<<sum<<endl;

}
int main()
{

    int a[5]={1,1,1,5,6};
    int size=5;
    product_of_array(a,5);
    sum_of_array(a,5);


}