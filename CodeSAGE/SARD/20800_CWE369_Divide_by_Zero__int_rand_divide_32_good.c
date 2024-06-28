#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 VAR2 = 7;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 FUN2(100 / VAR2);
 }
}
static void FUN3()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 VAR2 = FUN4();
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 if( VAR2 != 0 )
 {
 FUN2(100 / VAR2);
 }
 else
 {
 FUN5("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
