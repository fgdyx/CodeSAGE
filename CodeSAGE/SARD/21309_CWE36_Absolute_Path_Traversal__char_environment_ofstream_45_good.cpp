#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 ofstream VAR4;
 VAR4.open((char *)VAR2);
 VAR4.close();
 }
}
static void FUN2()
{
 char * VAR2;
 char VAR5[VAR6] = "";
 VAR2 = VAR5;
#ifdef VAR7
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
