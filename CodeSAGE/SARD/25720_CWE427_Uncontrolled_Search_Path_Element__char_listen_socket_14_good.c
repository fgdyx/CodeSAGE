#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, VAR5);
 }
 FUN3(VAR2);
}
static void FUN4()
{
 char * VAR2;
 char VAR3[250] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 strcat(VAR2, VAR5);
 }
 FUN3(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
