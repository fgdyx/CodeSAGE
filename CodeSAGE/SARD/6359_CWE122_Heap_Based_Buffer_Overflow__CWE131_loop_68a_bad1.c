#ifndef VAR1
void FUN1();
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 VAR3 = VAR2;
 FUN1();
}
#endif
