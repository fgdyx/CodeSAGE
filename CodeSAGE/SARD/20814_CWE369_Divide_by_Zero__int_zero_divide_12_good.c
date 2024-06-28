#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 0;
 }
 else
 {
 VAR2 = 0;
 }
 if(FUN2())
 {
 if( VAR2 != 0 )
 {
 FUN3(100 / VAR2);
 }
 else
 {
 FUN4("");
 }
 }
 else
 {
 if( VAR2 != 0 )
 {
 FUN3(100 / VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 7;
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 FUN3(100 / VAR2);
 }
 else
 {
 FUN3(100 / VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
