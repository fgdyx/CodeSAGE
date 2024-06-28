#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3->VAR5);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR6[sizeof(VAR2)];
 VAR2 * VAR7 = new(VAR6) VAR2;
 VAR7->VAR5 = 2;
 VAR7->VAR8 = 2;
 VAR3 = VAR7;
 }
 VAR4 = VAR3;
 FUN1();
}
#endif
