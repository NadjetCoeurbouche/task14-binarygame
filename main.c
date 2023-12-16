#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// you can change zeroes on binaryArray to test the algorithm logic
	int binaryArray [10] = {1,1,0,0,0,0,0,0,0,0};
	int longestSequenceIndex;
	int i = 0;
	int tempBig = 0;
	int big = 0;
	int s;
	
	//loop to visit all array elements
	while(i < 10){
		s = i;
			//loop to visit only array elements with 0 value

		while(binaryArray[s] == 0 && s < 10){
			//tempBig is for biggest cosecutive sequence of zeroes
					tempBig++;
			//s is loop index 
					s++;
	}
	// test if temp variable is less than big variale which is biggest cosecutive sequence of zeroes

		if(big < tempBig){
		
	// if yes than index will be index of zeroes loop minus tempBig var

			longestSequenceIndex = s - tempBig;
			
	// and temp will be assigned as latest biggest cosecutive sequence of zeroes
		
			big = tempBig;
	// returning the value of tempBig to zero so that we can calculate another  big cosecutive sequence of zeroes
		
		}	
					tempBig = 0;

		// to avoid the ones we have to reassign i index to s+1
						i = s + 1;

	}
	
	// here's the result
	
	printf("ana binary array  {1,1,0,0,0,0,0,0,0,0}\n");
	printf("largest squence of zero has %d zeros and it stars from %d index \n ", big, longestSequenceIndex );

	return 0;
}
