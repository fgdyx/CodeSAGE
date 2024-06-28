#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 FUN3(VAR2);
}
#endif
