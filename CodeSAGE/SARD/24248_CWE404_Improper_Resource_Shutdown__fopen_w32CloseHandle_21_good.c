#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static void FUN1(VAR4 * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
static void FUN3()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = fopen("", "");
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(VAR4 * VAR5)
{
 if(VAR3)
 {
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
static void FUN5()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = fopen("", "");
 VAR3 = 1;
 FUN4(VAR5);
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
