#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Kake {
    int age ;
    char* name ;

    struct  Kake (*add)(struct Kake);
      struct   Kake (*subtract)(struct Kake);
}Kake;

// Function definitions
struct Kake add(struct Kake  m) {

m.age=  256;

return  m;

}

struct  Kake subtract(struct  Kake  jk) {
jk.name  = (char*)malloc(100 * sizeof(char));
jk.name   = "pashi";


return jk;
}

int main() {


  Kake  one;
Kake  object;


Kake receive;

one.add  = add;

one.subtract  = subtract;

 receive =  one.add(object);
    printf("Age after addition: %d\n", receive.age);

receive  =  one.subtract(object);
    printf("Name after subtraction: %s\n", receive.name);







free(receive.name);

    return 0;
}
