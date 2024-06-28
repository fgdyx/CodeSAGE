#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 VAR3 = fopen("", "");
 {
 VAR2 * VAR3 = VAR4;
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
