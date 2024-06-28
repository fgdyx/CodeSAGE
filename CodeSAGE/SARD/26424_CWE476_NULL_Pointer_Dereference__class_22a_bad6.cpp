#ifndef VAR1
int VAR2 = 0;
void FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR4 = NULL;
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
