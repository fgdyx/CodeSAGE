#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0].VAR6 = 1;
 VAR3[0].VAR7 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
 }
}
#endif
