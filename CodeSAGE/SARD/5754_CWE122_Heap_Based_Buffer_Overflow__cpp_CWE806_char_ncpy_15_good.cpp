#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 }
 {
 char VAR3[50] = "";
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = new char[100];
 switch(6)
 {
 case 6:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR3[50] = "";
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
