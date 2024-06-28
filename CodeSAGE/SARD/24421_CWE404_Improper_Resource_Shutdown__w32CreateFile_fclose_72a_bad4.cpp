#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4);
void FUN2()
{
 HANDLE VAR5;
 VAR2<VAR3> VAR4;
 VAR5 = VAR6;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR5 = FUN3("",
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 FUN1(VAR4);
}
#endif
