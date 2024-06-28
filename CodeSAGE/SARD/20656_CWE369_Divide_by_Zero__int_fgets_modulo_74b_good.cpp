#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 FUN2(100 % VAR4);
}
void FUN3(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 if( VAR4 != 0 )
 {
 FUN2(100 % VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
