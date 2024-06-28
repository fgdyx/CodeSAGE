#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE690_NULL_Deref_From_Return__wchar_t_calloc_34_unionType VAR3;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 VAR3.VAR4 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR5;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR2, VAR6"");
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
