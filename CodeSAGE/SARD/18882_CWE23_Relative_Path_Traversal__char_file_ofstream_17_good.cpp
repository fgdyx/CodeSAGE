#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 strcat(VAR3, "");
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
