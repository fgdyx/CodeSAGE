#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = FUN2("","",stdin);
 const VAR4& VAR5 = FUN3();
 VAR5.FUN4(VAR3);
}
#endif
