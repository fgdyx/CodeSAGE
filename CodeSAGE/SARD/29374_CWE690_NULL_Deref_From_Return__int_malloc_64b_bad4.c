#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR4[0] = 5;
 FUN2(VAR4[0]);
 free(VAR4);
}
#endif
