#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 char VAR4[10] = "";
 int VAR5;
 VAR5 = FUN2(VAR6, VAR7, VAR2, -1, VAR4, 0, 0, 0);
 FUN2(VAR6, VAR7, VAR2, -1, VAR4, VAR5 , 0, 0);
 }
}
void FUN3()
{
 wchar_t * VAR2 = VAR8;
 {
 char VAR4[10] = "";
 int VAR5;
 VAR5 = FUN2(VAR6, VAR7, VAR2, -1, VAR4, 0, 0, 0);
 if (VAR5 < 10)
 {
 FUN2(VAR6, VAR7, VAR2, -1, VAR4, VAR5 , 0, 0);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
