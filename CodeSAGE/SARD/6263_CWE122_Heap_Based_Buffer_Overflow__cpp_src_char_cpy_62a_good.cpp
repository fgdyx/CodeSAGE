#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 FUN1(VAR2);
 {
 char VAR3[50] = "";
 strcpy(VAR3, VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
