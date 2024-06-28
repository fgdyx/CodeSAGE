#ifndef VAR1
void FUN1(int * * VAR2)
{
 int * VAR3 = *VAR2;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0] = 5;
 FUN2(VAR3[0]);
 free(VAR3);
}
#endif
