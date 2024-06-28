#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 free(VAR2);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 break;
 }
 while(1)
 {
 FUN3(VAR2);
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
