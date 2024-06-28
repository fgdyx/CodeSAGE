#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR5;
 VAR5.VAR6 = 1;
 VAR5.VAR7 = 1;
 VAR4 = &VAR5;
 }
 VAR2.VAR8 = VAR4;
 FUN1(VAR2);
}
#endif
