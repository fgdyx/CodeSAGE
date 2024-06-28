#ifndef VAR1
static int VAR2 = 0;
static void FUN1(long * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0] = 5L;
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
void FUN3()
{
 long * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (long *)realloc(VAR3, 1*sizeof(long));
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
