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
 FUN3(VAR4, VAR4, VAR5, VAR6, VAR7, NULL);
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
 FUN3(VAR4, VAR4, VAR5, VAR6, VAR7, NULL);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
