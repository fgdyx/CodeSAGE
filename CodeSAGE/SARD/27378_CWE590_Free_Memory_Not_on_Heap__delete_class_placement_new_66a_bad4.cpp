#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(VAR2)];
 VAR2 * VAR6 = new(VAR5) VAR2;
 VAR6->VAR7 = 2;
 VAR6->VAR8 = 2;
 VAR4 = VAR6;
 }
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
