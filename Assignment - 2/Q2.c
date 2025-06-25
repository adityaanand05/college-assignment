#include <stdio.h>
int fact(int n);
int main() {
    int num,result;
    printf("Enter your number: ");
    scanf("%d",&num);
    result = fact(num);
    printf("Result: %ld",result);
    return 0;
}
int fact(int n){
    if (n==1 || n==0)
    {
        return 1;
    }else{
    return fact(n-1)*n;
    }
}


// #include <stdio.h>

// int main() {
//     printf("    1\n");
//     printf("   121 \n");
//     printf("  12321\n");
//     printf(" 1234321\n");
//     printf("123454321\n");
    
    
//     return 0;
// }



