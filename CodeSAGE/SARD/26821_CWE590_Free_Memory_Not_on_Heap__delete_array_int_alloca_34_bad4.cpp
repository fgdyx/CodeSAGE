#ifndef VAR1
void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR2 = VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 int * VAR2 = VAR3.VAR7;
 FUN3(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
 }
}
#endif
