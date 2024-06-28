#ifndef VAR1
void FUN1(int * VAR2)
{
 int VAR3 = *VAR2;
 FUN2(100 / VAR3);
}
void FUN3(int * VAR2)
{
 int VAR3 = *VAR2;
 if( VAR3 != 0 )
 {
 FUN2(100 / VAR3);
 }
 else
 {
 FUN4("");
 }
}
#endif
