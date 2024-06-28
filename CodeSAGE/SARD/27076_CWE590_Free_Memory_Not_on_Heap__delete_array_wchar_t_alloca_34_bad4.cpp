#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 FUN3(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
 }
}
#endif
