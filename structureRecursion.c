#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct  kake {
    int age ;
    char* name ;

     struct  kake(*add)(struct kake);
   struct kake (*subtract)(struct   kake);
}lafoor;

// Function definitions
 lafoor add(lafoor  m) {

m.age=  256;

return  m;

}

  lafoor subtract(   lafoor  jk) {
jk.name  = (char*)malloc(100 * sizeof(char));
jk.name   = "pashi";


return jk;
}

int main() {


//   kake  one;
// kake  object;


// kake receive;

// one.add  = add;

// one.subtract  = subtract;

//  receive =  one.add(object);
//     printf("Age after addition: %d\n", receive.age);

// receive  =  one.subtract(object);
//     printf("Name after subtraction: %s\n", receive.name);

// free(receive.name);

lafoor  pointer  =  {0}; 
lafoor  object;
lafoor  reciever;
pointer.add=  add;
reciever  =pointer.add(object);
printf( "the  age is %d\n", reciever.age);

pointer.subtract =  subtract;

reciever =  pointer.subtract(object);
printf("the name is %s\n", reciever.name);





free(object.name);




    return 0;
}
