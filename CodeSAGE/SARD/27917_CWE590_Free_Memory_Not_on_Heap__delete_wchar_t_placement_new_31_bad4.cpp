#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR3[sizeof(wchar_t)];
 wchar_t * VAR4 = new(VAR3) wchar_t;
 *VAR4 = VAR5'';
 VAR2 = VAR4;
 }
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
 }
}
#endif
