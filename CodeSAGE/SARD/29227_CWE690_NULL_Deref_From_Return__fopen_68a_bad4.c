#ifndef VAR1
void FUN1();
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR3 = fopen("", "");
 VAR4 = VAR3;
 FUN1();
}
#endif
