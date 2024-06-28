#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memcpy(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memcpy(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
