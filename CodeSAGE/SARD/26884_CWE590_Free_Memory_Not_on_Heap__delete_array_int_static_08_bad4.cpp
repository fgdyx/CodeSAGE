#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int VAR3[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 }
 FUN3(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
}
#endif
