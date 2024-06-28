#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 strcat(VAR2, "");
 {
 char * VAR6 = VAR2;
 char * VAR2 = VAR6;
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
