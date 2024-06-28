#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int VAR4;
 VAR4 = 5;
 VAR3 = &VAR4;
 }
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
