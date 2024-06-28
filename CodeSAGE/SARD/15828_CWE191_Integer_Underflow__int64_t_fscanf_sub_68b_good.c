#ifndef VAR1
void FUN1()
{
 int64_t VAR2 = VAR3;
 {
 int64_t VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
}
void FUN3()
{
 int64_t VAR2 = VAR5;
 if (VAR2 > VAR6)
 {
 int64_t VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
