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
 VAR2 = new char[100];
 VAR2[0] = '';
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new char[100];
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
 memmove(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
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
