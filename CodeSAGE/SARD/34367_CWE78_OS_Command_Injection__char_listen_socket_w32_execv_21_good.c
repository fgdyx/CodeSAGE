#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static char * FUN1(char * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR4, "");
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char *VAR6[] = {VAR7, VAR8, VAR9, VAR10, NULL};
 FUN4(VAR7, VAR6);
 }
}
static char * FUN5(char * VAR4)
{
 if(VAR3)
 {
 strcat(VAR4, "");
 }
 return VAR4;
}
static void FUN6()
{
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 char *VAR6[] = {VAR7, VAR8, VAR9, VAR10, NULL};
 FUN4(VAR7, VAR6);
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
