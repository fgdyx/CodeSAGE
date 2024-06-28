#ifndef VAR1
void FUN1(VAR2 * &VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
}
void FUN3()
{
 FUN2();
}
#endif
