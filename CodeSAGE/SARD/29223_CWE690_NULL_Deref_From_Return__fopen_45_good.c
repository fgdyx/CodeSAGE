#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = fopen("", "");
 VAR4 = VAR3;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
