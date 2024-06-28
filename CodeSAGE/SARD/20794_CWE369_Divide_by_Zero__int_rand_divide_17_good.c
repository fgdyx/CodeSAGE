#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = FUN2();
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if( VAR4 != 0 )
 {
 FUN3(100 / VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 int VAR5,VAR6;
 int VAR4;
 VAR4 = -1;
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 VAR4 = 7;
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 FUN3(100 / VAR4);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
