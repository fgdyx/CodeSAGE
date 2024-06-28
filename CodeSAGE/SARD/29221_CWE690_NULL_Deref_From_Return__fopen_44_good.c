#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = fopen("", "");
 FUN3(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
