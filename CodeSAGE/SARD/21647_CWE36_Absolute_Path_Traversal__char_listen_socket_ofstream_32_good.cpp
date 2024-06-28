#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[VAR6] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
#ifdef VAR7
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 ofstream VAR8;
 VAR8.open((char *)VAR2);
 VAR8.close();
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
