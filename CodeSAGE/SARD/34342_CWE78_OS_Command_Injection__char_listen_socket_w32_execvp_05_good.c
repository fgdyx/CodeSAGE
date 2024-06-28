#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 char *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN3(VAR10, VAR5);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR11)
 {
 strcat(VAR2, "");
 }
 {
 char *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN3(VAR10, VAR5);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
