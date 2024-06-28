#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN3(VAR5->VAR6);
 delete VAR5;
}
#endif
