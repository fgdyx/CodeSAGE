#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 CWE690_NULL_Deref_From_Return__int64_t_realloc_34_unionType VAR4;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
