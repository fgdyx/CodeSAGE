#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 FUN2(VAR5->VAR6);
 delete VAR5;
}
void FUN3(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 if (VAR5 != NULL)
 {
 FUN2(VAR5->VAR6);
 delete VAR5;
 }
 else
 {
 FUN4("");
 }
}
#endif
