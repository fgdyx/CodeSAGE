#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR3[sizeof(int)];
 int * VAR4 = new(VAR3) int;
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 FUN1(VAR2);
}
#endif
