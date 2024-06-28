#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 delete[] VAR2;
 }
 else
 {
 delete[] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 char VAR3[100];
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 else
 {
 char VAR3[100];
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
