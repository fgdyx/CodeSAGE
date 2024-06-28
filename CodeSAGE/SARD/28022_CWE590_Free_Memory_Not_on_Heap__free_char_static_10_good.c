#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 }
 FUN2(VAR2);
 free(VAR2);
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 }
 FUN2(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
