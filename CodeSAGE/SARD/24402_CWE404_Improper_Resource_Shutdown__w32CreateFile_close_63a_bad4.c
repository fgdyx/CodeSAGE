#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 HANDLE VAR4;
 VAR4 = VAR5;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR4 = FUN3("",
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 FUN1(&VAR4);
}
#endif
