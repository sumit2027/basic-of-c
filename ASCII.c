 #include<stdio.h>
 int main()
 {
     char a;
      printf("Enter your charter\n");
      scanf("%c",&a);
 
     printf("Your charter is = %c\nAnd your ASCII code is = %d",a,a);
     return 0;
 
 
 }

// // #include <stdio.h>

// // int main() {
// //     char str[100];
// //     printf("Enter a string: ");
// //     fgets(str, sizeof(str), stdin);
// //     printf("You entered: %s", str);
// //     return 0;
// // }

// #include <stdio.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str); // Note: gets() is unsafe, consider using fgets() in real applications
//     printf("You entered: %s\n", str);
//     return 0;
// }

