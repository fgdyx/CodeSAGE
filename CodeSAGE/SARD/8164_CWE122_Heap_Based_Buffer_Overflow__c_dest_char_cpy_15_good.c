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
 VAR2[0] = '';
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
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
 VAR2[0] = '';
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
