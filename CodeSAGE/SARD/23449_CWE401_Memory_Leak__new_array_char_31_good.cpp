#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 char VAR3[100];
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN2(VAR2);
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 ;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN2(VAR2);
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 delete[] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
