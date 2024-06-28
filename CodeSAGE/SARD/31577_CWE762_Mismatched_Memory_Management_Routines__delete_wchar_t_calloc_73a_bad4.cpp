#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR4 = (wchar_t *)calloc(100, sizeof(wchar_t));
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
