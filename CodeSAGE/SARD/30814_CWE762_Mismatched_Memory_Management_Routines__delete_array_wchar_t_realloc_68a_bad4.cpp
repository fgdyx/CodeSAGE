#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 VAR3 = VAR2;
 FUN1();
}
#endif
