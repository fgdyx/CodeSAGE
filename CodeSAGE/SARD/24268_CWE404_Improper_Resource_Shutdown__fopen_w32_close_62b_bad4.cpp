#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = fopen("", "");
}
#endif
