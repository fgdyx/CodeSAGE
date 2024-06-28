#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR3);
}
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR3 = fopen("", "");
 FUN3(VAR3);
}
#endif
