#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR4 = (VAR3 *)malloc(1*sizeof(VAR3));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR4[0].VAR5 = 1;
 VAR4[0].VAR6 = 1;
 FUN2(&VAR4[0]);
 free(VAR4);
 }
}
#endif
