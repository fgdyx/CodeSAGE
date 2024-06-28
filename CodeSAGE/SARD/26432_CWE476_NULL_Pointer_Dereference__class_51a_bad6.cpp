#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 FUN1(VAR3);
}
#endif
