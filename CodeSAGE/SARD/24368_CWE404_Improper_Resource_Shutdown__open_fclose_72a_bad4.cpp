#ifndef VAR1
void FUN1(VAR2<int> VAR3);
void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR4 = FUN3("", VAR5|VAR6, VAR7|VAR8);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
#endif
