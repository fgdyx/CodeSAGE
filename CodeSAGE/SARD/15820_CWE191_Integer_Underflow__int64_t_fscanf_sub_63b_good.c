#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 int64_t VAR4 = *VAR3;
 {
 int64_t VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
void FUN3(VAR2 * VAR3)
{
 int64_t VAR4 = *VAR3;
 if (VAR4 > VAR6)
 {
 int64_t VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
}
#endif
