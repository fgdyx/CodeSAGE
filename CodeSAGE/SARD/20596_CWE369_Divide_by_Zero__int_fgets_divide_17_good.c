#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if( VAR4 != 0 )
 {
 FUN4(100 / VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN5()
{
 int VAR7,VAR8;
 int VAR4;
 VAR4 = -1;
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 VAR4 = 7;
 }
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 FUN4(100 / VAR4);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
