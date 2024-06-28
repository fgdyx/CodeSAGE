#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR2 = VAR4;
 }
 }
 FUN2(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
}
#endif
