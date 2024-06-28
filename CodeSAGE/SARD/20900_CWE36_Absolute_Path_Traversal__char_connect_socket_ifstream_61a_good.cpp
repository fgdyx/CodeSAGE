#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 ifstream VAR5;
 VAR5.open((char *)VAR2);
 VAR5.close();
 }
}
void FUN3()
{
 FUN2();
}
#endif
