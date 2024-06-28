#ifndef VAR1
static void FUN1(int VAR2)
{
 FUN2(100 / VAR2);
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 FUN1(VAR2);
}
static void FUN4(int VAR2)
{
 if( VAR2 != 0 )
 {
 FUN2(100 / VAR2);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 0;
 FUN4(VAR2);
}
void FUN7()
{
 FUN6();
 FUN3();
}
#endif
