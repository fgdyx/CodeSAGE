#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (int *)calloc(1, sizeof(int));
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
