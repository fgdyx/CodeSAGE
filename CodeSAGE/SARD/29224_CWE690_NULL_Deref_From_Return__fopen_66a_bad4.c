#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR4 = fopen("", "");
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
