#ifndef VAR1
int VAR2 = 0;
void FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR4 = FUN3("","",stdin);
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
