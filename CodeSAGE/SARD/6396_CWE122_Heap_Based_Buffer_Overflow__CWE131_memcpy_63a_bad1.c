#ifndef VAR1
void FUN1(int * * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR3 = (int *)malloc(10);
 FUN1(&VAR3);
}
#endif
