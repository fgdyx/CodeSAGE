#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = fopen("", "");
 return VAR3;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
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
