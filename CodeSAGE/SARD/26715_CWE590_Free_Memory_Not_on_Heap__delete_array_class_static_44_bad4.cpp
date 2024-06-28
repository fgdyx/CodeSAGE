#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3[0].VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR3;
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static TwoIntsClass VAR7[100];
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR7[VAR8].VAR4 = 1;
 VAR7[VAR8].VAR9 = 1;
 }
 }
 VAR3 = VAR7;
 }
 FUN4(VAR3);
}
#endif
