#ifndef VAR1
void FUN1(int64_t VAR2)
{
 if(VAR2 < 0)
 {
 int64_t VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
void FUN3(int64_t VAR2)
{
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR4/2))
 {
 int64_t VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
