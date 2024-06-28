#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 if(VAR2 > 0)
 {
 int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 int VAR2 = VAR5;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR6/2))
 {
 int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
