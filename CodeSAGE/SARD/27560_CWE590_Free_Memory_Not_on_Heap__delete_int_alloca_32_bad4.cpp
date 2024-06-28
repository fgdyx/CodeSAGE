#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int * *VAR3 = &VAR2;
 int * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 int * VAR2 = *VAR3;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int * VAR5 = (int *)FUN2(sizeof(int));
 *VAR5 = 5;
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 int * VAR2 = *VAR4;
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
 }
}
#endif
