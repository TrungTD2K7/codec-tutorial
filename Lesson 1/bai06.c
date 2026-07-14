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
  int sum = 0;
  for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
  for (int i = 0; i < n; i++) {
    if( arr[i] % 7 == 2 ){
      sum = sum + arr[i];
    }
	}

  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf ("%d" , sum);
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
