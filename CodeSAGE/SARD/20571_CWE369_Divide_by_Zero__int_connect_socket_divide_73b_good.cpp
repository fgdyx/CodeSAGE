#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 FUN3(100 / VAR4);
}
void FUN4(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 if( VAR4 != 0 )
 {
 FUN3(100 / VAR4);
 }
 else
 {
 FUN5("");
 }
}
#endif
