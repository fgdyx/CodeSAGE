#ifndef VAR1
void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int * VAR4 = (int *)FUN2(sizeof(int));
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 int * VAR2 = VAR3.VAR6;
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
 }
}
#endif
