#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = new char[100];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[50] = "";
 strcpy(VAR6, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
