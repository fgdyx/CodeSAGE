#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 free(VAR2);
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 FUN1(VAR2);
}
#endif
