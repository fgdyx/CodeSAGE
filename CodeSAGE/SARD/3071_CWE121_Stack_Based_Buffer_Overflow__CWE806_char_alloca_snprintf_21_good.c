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
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 char * VAR5 = (char *)FUN4(100*sizeof(char));
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR6[50] = "";
 FUN5(VAR6, strlen(VAR4), "", VAR4);
 FUN2(VAR4);
 }
}
static char * FUN6(char * VAR4)
{
 if(VAR3)
 {
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 }
 return VAR4;
}
static void FUN7()
{
 char * VAR4;
 char * VAR5 = (char *)FUN4(100*sizeof(char));
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 {
 char VAR6[50] = "";
 FUN5(VAR6, strlen(VAR4), "", VAR4);
 FUN2(VAR4);
 }
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
