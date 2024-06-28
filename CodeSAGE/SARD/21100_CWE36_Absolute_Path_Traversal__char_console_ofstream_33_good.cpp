#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 {
 char * VAR2 = VAR3;
 {
 ofstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
