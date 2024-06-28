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
 {
 char * VAR5 = new char[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = VAR5;
 }
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memcpy(VAR6, VAR4, 100*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
 ;
}
static char * FUN4(char * VAR4)
{
 if(VAR3)
 {
 {
 char * VAR5 = new char[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = VAR5;
 }
 }
 return VAR4;
}
static void FUN5()
{
 char * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memcpy(VAR6, VAR4, 100*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
 ;
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
