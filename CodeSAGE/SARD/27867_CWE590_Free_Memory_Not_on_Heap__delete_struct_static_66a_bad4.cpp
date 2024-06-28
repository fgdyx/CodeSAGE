#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR5;
 VAR5.VAR6 = 1;
 VAR5.VAR7 = 1;
 VAR4 = &VAR5;
 }
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
