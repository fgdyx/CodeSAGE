#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 wchar_t * VAR3 = (wchar_t *)FUN2(sizeof(wchar_t));
 *VAR3 = VAR4'';
 VAR2 = VAR3;
 }
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
 }
}
#endif
