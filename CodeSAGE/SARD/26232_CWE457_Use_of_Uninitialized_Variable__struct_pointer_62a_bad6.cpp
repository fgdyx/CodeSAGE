#ifndef VAR1
void FUN1(VAR2 * &VAR3);
void FUN2()
{
 VAR2 * VAR3;
 FUN1(VAR3);
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN3(VAR3->VAR4);
 FUN3(VAR3->VAR5);
}
#endif
