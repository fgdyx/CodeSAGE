#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 strcat(VAR2, VAR4);
 }
 FUN4(VAR2);
}
static void FUN5()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 if(FUN6())
 {
 strcat(VAR2, VAR4);
 }
 FUN4(VAR2);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
