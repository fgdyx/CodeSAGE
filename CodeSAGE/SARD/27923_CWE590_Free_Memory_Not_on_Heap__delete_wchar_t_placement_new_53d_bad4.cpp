#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
