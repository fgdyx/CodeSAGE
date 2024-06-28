#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
