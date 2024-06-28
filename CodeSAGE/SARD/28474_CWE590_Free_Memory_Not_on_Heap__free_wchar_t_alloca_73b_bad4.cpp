#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 FUN3(VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR4);
}
#endif
