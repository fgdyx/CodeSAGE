#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (wchar_t *)realloc(VAR3, 100*sizeof(wchar_t));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
