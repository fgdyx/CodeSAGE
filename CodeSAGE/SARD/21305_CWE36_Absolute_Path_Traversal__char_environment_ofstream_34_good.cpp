#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR3.VAR7 = VAR2;
 {
 char * VAR2 = VAR3.VAR8;
 {
 ofstream VAR9;
 VAR9.open((char *)VAR2);
 VAR9.close();
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
