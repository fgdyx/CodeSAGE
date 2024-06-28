#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 TwoIntsClass VAR4;
 VAR4.VAR5 = 1;
 VAR4.VAR6 = 1;
 VAR3 = &VAR4;
 }
 }
 FUN2(VAR3->VAR5);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
