#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 VAR3 * VAR6 = (VAR3 *)FUN3(sizeof(VAR3));
 VAR6->VAR7 = 1;
 VAR6->VAR8 = 1;
 VAR5 = VAR6;
 }
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 FUN1(VAR4);
}
#endif
