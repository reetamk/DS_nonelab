// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a_r,a_c,b_r,b_c,i,j,k;
    int **a,**b,**c;
    cout<<"Rows one";
    cin>>a_r;
    cout<<"Column one";
    cin>>a_c;
    cout<<"Rows two";
    cin>>b_r;
    cout<<"Column two";
    cin>>b_c;
    if(a_c != b_r) 
{ 
	printf("\nCannot multiply two matrices.");  
	return(0);  
}
   a = (int **) malloc(a_r*sizeof(int *));  
   b = (int **) malloc(b_r*sizeof(int *)); 
   c = (int **) malloc(a_r*sizeof(int *));
   for(i=0; i<a_r; i++) 
 	     a[i] = (int *)malloc(sizeof(int) * a_c); 
   for(i=0; i<b_r; i++)  
 	     b[i] = (int *)malloc(sizeof(int) * b_c); 
   for(i=0; i<a_r; i++)  
 	     c[i] = (int *)malloc(sizeof(int) * b_c);
cout<<"Enter elements of first matrix";
for(i=0; i< a_r; i++) 
{ 
	for(j=0; j< a_c; j++) 
	{ 
		cin>>a[i][j];
	} 
} 
cout<<"Enter elements of second matrix";
for(i=0; i< b_r; i++) 
{ 
	for(j=0; j< b_c; j++) 
	{
		cin>>b[i][j]; 
	} 
} 
for(i=0; i < a_r; i++) 
{ 
	for(j=0; j < a_c; j++) 
	{ 
		c[i][j] = 0; 
 		for(k=0; k<b_c; k++)  
		c[i][j] =c[i][j] + a[i][k] * b[k][j]; 
	} 
}
for(i=0; i< a_r; i++)  
{ 
	cout<<"\n\t\t\t"; 
	for(j=0; j < b_c; j++) 	 
	cout<<c[i][j]; 
} 
     return 0;
}
