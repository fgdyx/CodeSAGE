#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 FUN3(VAR5->VAR6);
 delete VAR5;
}
void FUN4(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 if (VAR5 != NULL)
 {
 FUN3(VAR5->VAR6);
 delete VAR5;
 }
 else
 {
 FUN5("");
 }
}
#endif
