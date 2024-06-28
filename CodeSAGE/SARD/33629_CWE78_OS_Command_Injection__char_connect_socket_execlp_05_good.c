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
 FUN3(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR9)
 {
 strcat(VAR2, "");
 }
 FUN3(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
