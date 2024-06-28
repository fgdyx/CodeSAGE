#ifndef VAR1
void FUN1(VAR2 * &VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN3(VAR3[0]);
}
#endif
