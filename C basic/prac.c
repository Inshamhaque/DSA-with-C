#include <stdio.h>
void Namaste();
void Bonjour();

int main()
{
    int n;
    printf("enter 1-> Indian or 2->French:    ");
    scanf("%d",&n);
    if (n==1)
    {
        Namaste();
    }
    else
    {
        Bonjour();
    }
    return 0;
}
void Namaste(){
    printf("Namaste");
}
void Bonjour(){
    printf("Bonjour");
}