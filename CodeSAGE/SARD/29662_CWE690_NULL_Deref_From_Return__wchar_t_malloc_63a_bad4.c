#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (wchar_t *)malloc(20*sizeof(wchar_t));
 FUN1(&VAR3);
}
#endif
