#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN4(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(FUN6())
 {
 strcat(VAR2, "");
 }
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN4(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
