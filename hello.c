//111111111111111111111111111111111111111111111111111111
// #include<stdio.h>
// int main(){
//     int n;
//     int sum=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         sum += arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }
//2222222222222222222222222222222222222222222222222222222
//  #include<stdio.h>
//  int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//     }
//     int max = arr[0];
//     for (int i=1;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max= arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
//  }
//333333333333333333333333333333333333333333333333333333
//  #include<stdio.h>
//  #include<limits.h>
//  int main(){
//     int n,i;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i,n;i++){
//         scanf("%d", arr[i]);
//     }
//     int minstk = arr[0];
//     for(i=1;i<n;i++);{
//         if(arr[i]<minstk){
//             minstk=arr[i];
//         }
//     }
//     printf("%d",minstk);
//     return 0;
//  }
//4444444444444444444444444444444444444444444444444444444444
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i =0;i<0;i++){
//         scanf("%d",arr[i]);
//     }
//     int even=0;
//     int odd=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     printf("EVEN:%d\n",even);
//     printf("ODD:%d\n",odd);
//     return 0;
// }
//55555555555555555555555555555555555555555555555555555555555
// #include<stdio.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int arr[100];
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i = n - 1;i >= 0;i--){
//         printf("%d", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
//99999999999999999999999999999999999999999999999999999999999
// #include<stdio.h>
// int main(){
//     int n,i;
//     float sum=0.0, average;
//     scanf("%d",&n);
//     int arr[10];
//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//         sum+= arr[i];
//     }
//     if (n>0){
//         average = sum/n;
//         printf("%.2f\n", average);
//     }
//     else {
//         printf("The array is empyt cannot calculate average");
//         }
//     return 0;
// }
//10101010101010101010101010101010101010101010101010101010101010
// #include <stdio.h>
// int main() {
//     int n, i, a[100], max, min;
//     scanf("%d", &n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);

//     max = min = a[0];
//     for(i=1;i<n;i++){
//         if(a[i] > max) max = a[i];
//         if(a[i] < min) min = a[i];
//     }
//     printf("Max = %d\nMin = %d", max, min);
// }
//111111111111111111111111111111111111111111111111111111111111111
// #include <stdio.h>
// int main(){
//     int n,a[100],i,key,flag=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++) scanf("%d",&a[i]);
//     scanf("%d",&key);

//     for(i=0;i<n;i++){
//         if(a[i]==key){
//             printf("Found at position %d", i);
//             flag=1;
//             break;
//         }
//     }
//     if(!flag) printf("Not found");
// }
//12121212121212121212121212121212121212121212121212121212121212121212
// #include <stdio.h>
// int main(){
//     int n1,n2,a[100],b[100],c[200],i;
//     scanf("%d",&n1);
//     for(i=0;i<n1;i++) scanf("%d",&a[i]);
//     scanf("%d",&n2);
//     for(i=0;i<n2;i++) scanf("%d",&b[i]);

//     for(i=0;i<n1;i++) c[i]=a[i];
//     for(i=0;i<n2;i++) c[n1+i]=b[i];

//     for(i=0;i<n1+n2;i++) printf("%d ",c[i]);
// }
// #include<stdio.h>
// int main(){
//     int i,n,max,min;
//     int arr[100];
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     max=arr[0];
//     min=arr[0];
//     for(i=1;i<n;i++){
//         if(arr[i]>max){
//             max= arr[i];
//         }
//         if(arr[i]<min){
//             min= arr[i];
//         }
//     }
//     printf("Maximum Number:- %d", max);
//     printf("Minimum Number:- %d", min);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,j,temp,n,arr[100];
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp= arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//  #include<stdio.h>
//  int main(){
//     int i,n,sum=0,arr[100];
//     float avg;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     sum+=arr[i];
//     }
//     avg = (float)sum/n;
//     printf("%d %.2f", sum,avg);
//     return 0;
//  }
// #include<stdio.h>
// int main(){
//     int i,j,n,arr[100],lis[100];
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//         lis[i]=1
//     }
//     for(i=1;i<n;i++){
//         if(arr[i]> arr[j] && lis[i]<lis[j]+1){
//             lis[i]=lis[j]+1;
//         }
//     }
//     int max=lis[0];
//     for(i=1;i<n;i++){
//         if(lis[i]>max){
//             max=lis[i];
//         }
//     }
//     printf(" LIS Length %d, max");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i, length;
//     char str[100];
//     scanf("%s", str);
//     for (i=0;str[i]!='\0';i++){
//         length++;
//     }
//     printf("%d ", length);
//     return 0;
// #include <stdio.h>
// #include<stdio.h>
// int main() {
//     int N, i, sum = 0;

//     printf("Enter a number N: ");
//     scanf("%d", &N);

//     // Sum odd numbers from 1 to N
//     for(i = 1; i <= N; i++) {
//         if(i % 2 != 0) {
//             sum += i;
//         }
//     }

//     printf("Sum of odd numbers from 1 to %d = %d\n", N, sum);
//     return 0;
// }
