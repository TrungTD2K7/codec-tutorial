#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n ;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for (int i = 0; i < n-1; i++)
		    for (int j = i+1; j < n; j++)
			    if (arr[i] > arr[j]) {
				     int tmp = arr[i];
			      	arr[i] = arr[j];
			      	arr[j] = tmp;
			      }
for (int i = 0 ; i < n ; i++ ){
  if ( arr[i] % 2 == 0 ){
    printf("%d\n", arr[i]);
  }
}
for (int i = 0 ; i < n ; i++ ){
  if ( arr[i] % 2 != 0 ){
    printf("%d\n", arr[i]);
  }
}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
