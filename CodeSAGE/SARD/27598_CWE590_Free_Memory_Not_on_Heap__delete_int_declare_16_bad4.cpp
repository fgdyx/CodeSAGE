#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int VAR3;
 VAR3 = 5;
 VAR2 = &VAR3;
 }
 break;
 }
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
