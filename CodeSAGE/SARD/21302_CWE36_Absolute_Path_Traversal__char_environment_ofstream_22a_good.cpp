#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
char * FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 ofstream VAR7;
 VAR7.open((char *)VAR4);
 VAR7.close();
 }
 ;
}
char * FUN3(char * VAR4);
static void FUN4()
{
 char * VAR4;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN3(VAR4);
 {
 ofstream VAR7;
 VAR7.open((char *)VAR4);
 VAR7.close();
 }
 ;
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
