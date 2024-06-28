#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(VAR3)];
 VAR3 * VAR6 = new(VAR5) VAR3;
 VAR6->VAR7 = 1;
 VAR6->VAR8 = 1;
 VAR4 = VAR6;
 }
 }
 FUN2(VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR4;
}
#endif
