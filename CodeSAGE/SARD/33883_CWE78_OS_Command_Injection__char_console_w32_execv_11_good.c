#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
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
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN4(VAR5, VAR4);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN6())
 {
 strcat(VAR2, "");
 }
 {
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN4(VAR5, VAR4);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
