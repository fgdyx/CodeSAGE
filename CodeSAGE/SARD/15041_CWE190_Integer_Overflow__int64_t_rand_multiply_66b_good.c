#ifndef VAR1
void FUN1(int64_t VAR2[])
{
 int64_t VAR3 = VAR2[2];
 if(VAR3 > 0)
 {
 int64_t VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
void FUN3(int64_t VAR2[])
{
 int64_t VAR3 = VAR2[2];
 if(VAR3 > 0)
 {
 if (VAR3 < (VAR5/2))
 {
 int64_t VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
