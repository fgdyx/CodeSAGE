#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR4;
 VAR4.VAR5 = 1;
 VAR4.VAR6 = 1;
 VAR3 = &VAR4;
 }
 }
 else
 {
 {
 VAR2 * VAR4 = new VAR2;
 VAR4->VAR5 = 2;
 VAR4->VAR6 = 2;
 VAR3 = VAR4;
 }
 }
 FUN3(VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
