#ifndef VAR1
void FUN1(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR4->VAR5);
 FUN2(VAR4->VAR6);
}
#endif
