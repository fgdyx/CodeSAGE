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
 VAR4 = new char[100];
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR5[50] = "";
 strcat(VAR5, VAR4);
 FUN2(VAR4);
 delete [] VAR4;
 }
 ;
}
static char * FUN4(char * VAR4)
{
 if(VAR3)
 {
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 }
 return VAR4;
}
static void FUN5()
{
 char * VAR4;
 VAR4 = new char[100];
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 char VAR5[50] = "";
 strcat(VAR5, VAR4);
 FUN2(VAR4);
 delete [] VAR4;
 }
 ;
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
