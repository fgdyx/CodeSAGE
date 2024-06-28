#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
