// function in structure to add two vectors : 

#include <stdio.h>
struct vector
{
    int i;
    int j;
    int z;
};

struct vector vectorsum(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j , v1.z + v2.z};
    return v3;
}

int main()
{
    struct vector v1 = {1, 2 ,3};
    struct vector v2 = {5, 7, 9};
    struct vector v3 = vectorsum(v1, v2);

    printf("The value of v3 is %di + %dj + %dz", v3.i, v3.j , v3.z);

    return 0;
}