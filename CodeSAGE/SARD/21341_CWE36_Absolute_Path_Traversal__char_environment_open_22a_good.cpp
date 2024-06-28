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
 int VAR7;
 VAR7 = FUN3(VAR4, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
 ;
}
char * FUN5(char * VAR4);
static void FUN6()
{
 char * VAR4;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 int VAR7;
 VAR7 = FUN3(VAR4, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
 ;
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
