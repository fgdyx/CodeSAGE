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
 strncat(VAR6, VAR4, strlen(VAR4));
 VAR6[50-1] = '';
 FUN2(VAR4);
 }
}
static char * FUN5(char * VAR4)
{
 if(VAR3)
 {
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 }
 return VAR4;
}
static void FUN6()
{
 char * VAR4;
 char * VAR5 = (char *)FUN4(100*sizeof(char));
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 char VAR6[50] = "";
 strncat(VAR6, VAR4, strlen(VAR4));
 VAR6[50-1] = '';
 FUN2(VAR4);
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
