#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
#ifdef VAR6
 strcat(VAR3, "");
#else
 strcat(VAR3, "");
#endif
 }
 {
 ofstream VAR7;
 VAR7.open((char *)VAR3);
 VAR7.close();
 }
}
void FUN2()
{
 FUN1();
}
#endif
