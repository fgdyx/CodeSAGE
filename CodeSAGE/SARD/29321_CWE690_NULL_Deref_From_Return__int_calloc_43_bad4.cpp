#ifndef VAR1
static void FUN1(int * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (int *)calloc(1, sizeof(int));
}
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 free(VAR2);
}
#endif
