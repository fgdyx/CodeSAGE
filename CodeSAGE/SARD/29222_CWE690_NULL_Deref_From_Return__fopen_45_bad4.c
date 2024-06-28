#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR3);
}
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
