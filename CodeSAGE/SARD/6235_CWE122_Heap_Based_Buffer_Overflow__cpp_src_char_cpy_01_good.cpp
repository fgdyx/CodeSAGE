#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char VAR3[50] = "";
 strcpy(VAR3, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
