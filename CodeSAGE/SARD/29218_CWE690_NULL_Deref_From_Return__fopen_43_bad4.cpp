#ifndef VAR1
static void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR3 = fopen("", "");
}
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR3);
}
#endif
