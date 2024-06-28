#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (wchar_t *)realloc(VAR2, 20*sizeof(wchar_t));
 return VAR2;
}
#endif
