#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new char[10+1];
 }
 {
 char VAR4[10+1] = VAR5;
 strcpy(VAR2, VAR4);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 VAR2 = new char[10+1];
 }
 {
 char VAR4[10+1] = VAR5;
 strcpy(VAR2, VAR4);
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
