#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
   char Name[50];
   char Id [10];
   float Credit;
   char Address;
};


int main(int argc, char const *argv[])
{
    struct client client1 = {0}; 
    
        strcpy(client1.Name , "Wallace Bower");
        strcpy(client1.Id , "0000077");
        client1.Credit = 1000000;
        strcpy(client1.Address , "18 Logan Rd");

        printf("The client name is: %s", client1.Name);
        printf("The client Id is: %s", client1.Name);
        printf("The client Credit is: %d", client1.Name);
        printf("The client Address is: %s", client1.Name);
    
      return 0;
}

