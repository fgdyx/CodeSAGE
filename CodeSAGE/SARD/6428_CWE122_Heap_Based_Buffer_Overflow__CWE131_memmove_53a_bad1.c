#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 FUN1(VAR2);
}
#endif
