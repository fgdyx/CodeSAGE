#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR2, VAR5, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 switch(6)
 {
 case 6:
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR2, VAR5, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
