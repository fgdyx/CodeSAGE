#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 char VAR4[100];
 VAR2 = VAR4;
 strcpy(VAR2, "");
 FUN2(VAR2);
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 ;
 }
}
static void FUN3()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN2(VAR2);
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 delete[] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
