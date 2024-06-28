#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 /* POTENTIAL FLAW: Set data to NULL */
 VAR4 = NULL;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
