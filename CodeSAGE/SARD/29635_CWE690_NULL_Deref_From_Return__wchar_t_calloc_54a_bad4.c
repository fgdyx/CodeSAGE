#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 FUN1(VAR2);
}
#endif
