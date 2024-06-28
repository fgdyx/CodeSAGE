#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 delete[] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(VAR3)
 {
 delete[] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 char VAR5[100];
 VAR2 = VAR5;
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(VAR3)
 {
 ;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 char VAR5[100];
 VAR2 = VAR5;
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 if(VAR3)
 {
 ;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
