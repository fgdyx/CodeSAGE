#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 while(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 }
 {
 char VAR3[50] = "";
 FUN2(VAR3, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
}
#endif
