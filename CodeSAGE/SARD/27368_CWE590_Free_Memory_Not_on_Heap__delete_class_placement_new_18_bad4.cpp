#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(VAR2)];
 VAR2 * VAR6 = new(VAR5) VAR2;
 VAR6->VAR7 = 2;
 VAR6->VAR8 = 2;
 VAR3 = VAR6;
 }
 FUN2(VAR3->VAR7);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
