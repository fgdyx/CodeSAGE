#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR3 = VAR5;
 }
 }
 FUN2(&VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR3;
}
#endif
