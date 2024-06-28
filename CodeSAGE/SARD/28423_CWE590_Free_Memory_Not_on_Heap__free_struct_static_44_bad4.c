#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(&VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR3);
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 1;
 VAR6[VAR7].VAR9 = 1;
 }
 }
 VAR3 = VAR6;
 }
 FUN4(VAR3);
}
#endif
