#include<bits/stdc++.h>
using namespace std;

// Define the number of runs for the test data
// generated
#define RUN 2

// Define the range of the test data generated
#define MAX 100000

int main()
{
    // Uncomment the below line to store
    // the test data in a file
    // freopen("Test_Cases.in", "w", stdout);

    // For random values every time
    srand(time(NULL));
    int n=1+rand() % 10;
    printf("%d\n",n);
    printf("%d",1+rand() % n);

    // Uncomment the below line to store
    // the test data in a file
    //fclose(stdout);
    return(0);
}
