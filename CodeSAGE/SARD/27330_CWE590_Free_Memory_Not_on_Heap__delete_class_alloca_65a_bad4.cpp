#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 VAR2 * VAR6 = (VAR2 *)FUN3(sizeof(VAR2));
 VAR6->VAR7 = 2;
 VAR6->VAR8 = 2;
 VAR3 = VAR6;
 }
 FUN4(VAR3);
}
#endif
