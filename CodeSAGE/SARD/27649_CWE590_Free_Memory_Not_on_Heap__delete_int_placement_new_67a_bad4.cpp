#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR4[sizeof(int)];
 int * VAR5 = new(VAR4) int;
 *VAR5 = 5;
 VAR3 = VAR5;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
