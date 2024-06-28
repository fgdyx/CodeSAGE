#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3->VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR7[sizeof(VAR2)];
 VAR2 * VAR8 = new(VAR7) VAR2;
 VAR8->VAR4 = 2;
 VAR8->VAR9 = 2;
 VAR3 = VAR8;
 }
 FUN4(VAR3);
}
#endif
