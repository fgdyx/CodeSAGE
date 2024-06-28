#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new char[10+1];
 }
 {
 char VAR4[10+1] = VAR5;
 memmove(VAR2, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new char[10+1];
 }
 {
 char VAR4[10+1] = VAR5;
 memmove(VAR2, VAR4, (strlen(VAR4) + 1) * sizeof(char));
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
