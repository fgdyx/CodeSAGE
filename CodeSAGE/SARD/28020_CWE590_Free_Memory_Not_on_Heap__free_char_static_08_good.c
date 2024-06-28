#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 FUN3(VAR2);
 free(VAR2);
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 FUN3(VAR2);
 free(VAR2);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
