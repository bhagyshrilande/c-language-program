 #include<stdio.h>
 void main()
 {
     char operation;
     printf("enter your operation");
     scanf("%c",&operation);

     switch(operation)
     {
     case 'a':
        printf("fan is start");
        break;
     case 'b':
        printf("TV is on");
        break;
     case 'c':
        printf("computer is on");
        break;
     case 'd':
        printf("all divices are off");
        break;
    default:
    printf("your operation is not valid");

     }
 }
