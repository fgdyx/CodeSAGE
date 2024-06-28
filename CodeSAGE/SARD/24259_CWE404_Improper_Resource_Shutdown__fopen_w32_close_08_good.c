#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = fopen("", "");
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = fopen("", "");
 if(FUN5())
 {
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
