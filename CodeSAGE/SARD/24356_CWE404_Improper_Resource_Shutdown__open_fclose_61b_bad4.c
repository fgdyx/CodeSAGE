#ifndef VAR1
int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 return VAR2;
}
#endif
