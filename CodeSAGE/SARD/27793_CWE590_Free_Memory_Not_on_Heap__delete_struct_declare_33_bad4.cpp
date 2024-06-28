#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 twoIntsStruct VAR5;
 VAR5.VAR6 = 1;
 VAR5.VAR7 = 1;
 VAR3 = &VAR5;
 }
 {
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
 }
}
#endif
