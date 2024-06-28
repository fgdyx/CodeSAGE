#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 }
 FUN3(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
