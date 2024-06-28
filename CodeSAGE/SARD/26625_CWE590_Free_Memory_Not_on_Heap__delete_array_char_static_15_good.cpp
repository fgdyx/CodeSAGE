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
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 break;
 }
 FUN2(VAR2);
 delete [] VAR2;
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN2(VAR2);
 delete [] VAR2;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
