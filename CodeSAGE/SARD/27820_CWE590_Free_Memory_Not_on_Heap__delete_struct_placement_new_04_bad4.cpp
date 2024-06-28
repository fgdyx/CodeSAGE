#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(VAR2)];
 VAR2 * VAR6 = new(VAR5) VAR2;
 VAR6->VAR7 = 1;
 VAR6->VAR8 = 1;
 VAR3 = VAR6;
 }
 }
 FUN2(VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
