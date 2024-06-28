#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR4;
 VAR4 = 5L;
 VAR2 = &VAR4;
 }
 }
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
