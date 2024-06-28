#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 const VAR7& VAR8 = FUN3();
 VAR8.FUN4(VAR2);
}
#endif
