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
 VAR3 * VAR5 = (VAR3 *)FUN2(100*sizeof(VAR3));
 {
 size_t VAR2;
 for (VAR2 = 0; VAR2 < 100; VAR2++)
 {
 VAR5[VAR2].VAR6 = 1;
 VAR5[VAR2].VAR7 = 1;
 }
 }
 VAR4 = VAR5;
 }
 }
 FUN3(&VAR4[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR4;
}
#endif
