#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 VAR2 * VAR4 = (VAR2 *)FUN3(sizeof(VAR2));
 VAR4->VAR5 = 2;
 VAR4->VAR6 = 2;
 VAR3 = VAR4;
 }
 FUN1(VAR3);
}
#endif
