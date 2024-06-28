#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 1;
 }
 }
 VAR3 = VAR4;
 }
 }
 FUN3(&VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR3;
}
#endif
