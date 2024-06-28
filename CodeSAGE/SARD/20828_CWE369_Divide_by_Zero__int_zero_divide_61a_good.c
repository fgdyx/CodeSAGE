#ifndef VAR1
int FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 FUN3(100 / VAR2);
}
int FUN4(int VAR2);
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN4(VAR2);
 if( VAR2 != 0 )
 {
 FUN3(100 / VAR2);
 }
 else
 {
 FUN6("");
 }
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
