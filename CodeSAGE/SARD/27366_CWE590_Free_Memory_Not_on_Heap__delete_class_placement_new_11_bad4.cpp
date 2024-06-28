#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR4[sizeof(VAR2)];
 VAR2 * VAR5 = new(VAR4) VAR2;
 VAR5->VAR6 = 2;
 VAR5->VAR7 = 2;
 VAR3 = VAR5;
 }
 }
 FUN3(VAR3->VAR6);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
