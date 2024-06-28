#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 return VAR2;
}
#endif
