#include<bits/stdc++.h>
using namespace std;
// Define the range of the test data generated-for nos between 10 and 55
#define MAX 1000000
//define size of array
int main(){
//freopen("ArrayTestCases.txt", "w", stdout);

// For random values every time
//makes use of the computer's internal clock to control the choice of the seed.  Since time is continually changing, the seed is forever changing.
//Remember, if the seed number remains the same, the sequence of numbers will be repeated for each run of the program.
srand(time(NULL));
int n=1+rand()%100;
printf("%d\n",n);
for(int i=0;i<n;i++){
//Generating random numbers within a specified range:
//int number = a + rand( ) % n;
//a = the first number in your range
//n = the number of terms in your range(range computed by  largest value - smallest value + 1)
printf("%d ",rand()%MAX);
}
//fclose(stdout);
return 0;
}
