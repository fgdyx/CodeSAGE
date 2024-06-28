#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static twoIntsStruct VAR4;
 VAR4.VAR5 = 1;
 VAR4.VAR6 = 1;
 VAR3 = &VAR4;
 }
 FUN1(VAR3);
}
#endif
