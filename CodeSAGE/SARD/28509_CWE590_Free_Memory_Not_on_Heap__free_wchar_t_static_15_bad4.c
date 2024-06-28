#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
