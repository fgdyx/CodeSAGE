#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 FUN2(VAR2);
 free(VAR2);
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
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
