#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 if(FUN2())
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
#endif
