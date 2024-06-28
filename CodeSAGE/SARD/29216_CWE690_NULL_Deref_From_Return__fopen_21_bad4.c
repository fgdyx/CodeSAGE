#ifndef VAR1
static int VAR2 = 0;
static void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR4);
 }
}
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR4 = fopen("", "");
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
