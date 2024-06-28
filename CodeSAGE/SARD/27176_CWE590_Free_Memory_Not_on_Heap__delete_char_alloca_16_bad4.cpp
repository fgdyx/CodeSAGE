#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR3 = (char *)FUN2(sizeof(char));
 *VAR3 = '';
 VAR2 = VAR3;
 }
 break;
 }
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
