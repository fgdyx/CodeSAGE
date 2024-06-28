#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
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
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(FUN6())
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
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
