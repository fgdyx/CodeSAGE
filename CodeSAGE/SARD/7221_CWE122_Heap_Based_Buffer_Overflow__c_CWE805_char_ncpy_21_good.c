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
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
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
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR4, VAR5, 100-1);
 VAR4[100-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
static char * FUN4(char * VAR4)
{
 if(VAR3)
 {
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
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
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR4, VAR5, 100-1);
 VAR4[100-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
