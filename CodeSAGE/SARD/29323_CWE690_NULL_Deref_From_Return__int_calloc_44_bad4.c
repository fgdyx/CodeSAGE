#ifndef VAR1
static void FUN1(int * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 free(VAR2);
}
void FUN3()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (int *)calloc(1, sizeof(int));
 FUN4(VAR2);
}
#endif
