#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
#endif
