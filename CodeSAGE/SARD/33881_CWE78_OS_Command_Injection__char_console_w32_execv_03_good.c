#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN3(VAR5, VAR4);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 strcat(VAR2, "");
 }
 {
 char *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN3(VAR5, VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
