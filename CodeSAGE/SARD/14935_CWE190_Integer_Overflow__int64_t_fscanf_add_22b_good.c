#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(int64_t VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR5 < VAR6)
 {
 int64_t VAR7 = VAR5 + 1;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN4(int64_t VAR5)
{
 if(VAR3)
 {
 if (VAR5 < VAR6)
 {
 int64_t VAR7 = VAR5 + 1;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5(int64_t VAR5)
{
 if(VAR4)
 {
 {
 int64_t VAR7 = VAR5 + 1;
 FUN3(VAR7);
 }
 }
}
#endif
