#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = FUN3("", VAR4|VAR5, VAR6|VAR7);
 FUN1(&VAR3);
}
#endif
