#ifndef VAR1
static int VAR2 = 0;
static void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR4[0] = 5LL;
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
void FUN3()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR4 = (VAR3 *)malloc(1*sizeof(VAR3));
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
