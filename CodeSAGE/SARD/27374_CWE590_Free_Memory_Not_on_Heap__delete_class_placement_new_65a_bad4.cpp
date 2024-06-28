#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR6[sizeof(VAR2)];
 VAR2 * VAR7 = new(VAR6) VAR2;
 VAR7->VAR8 = 2;
 VAR7->VAR9 = 2;
 VAR3 = VAR7;
 }
 FUN3(VAR3);
}
#endif
